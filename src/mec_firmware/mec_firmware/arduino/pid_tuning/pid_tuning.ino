#include <PID_v1.h>

void IRAM_ATTR frontLeftEncoderCallback();
void IRAM_ATTR frontRightEncoderCallback();
void IRAM_ATTR rearLeftEncoderCallback();
void IRAM_ATTR rearRightEncoderCallback();
void setupPins();
void setupInterrupts();

// --- CONFIGURAÇÃO DO TESTE ---
// Defina qual motor você quer testar (0 a 3)
// 0: Dianteiro Esquerdo
// 1: Dianteiro Direito
// 2: Traseiro Esquerdo
// 3: Traseiro Direito
const int motorToTune = 0;

// Defina a velocidade alvo (em rad/s) para o teste
const double targetVelocity = 1.0;

// Definições de Pinos
#define left_L298N_enA 13
#define left_L298N_in1 25
#define left_L298N_in2 26
#define left_L298N_enB 14
#define left_L298N_in3 12
#define left_L298N_in4 27
#define right_L298N_enA 23
#define right_L298N_in1 19
#define right_L298N_in2 18
#define right_L298N_enB 15
#define right_L298N_in3 17
#define right_L298N_in4 16
#define front_left_encoder_phaseA 32
#define front_left_encoder_phaseB 35
#define front_right_encoder_phaseA 4
#define front_right_encoder_phaseB 5
#define rear_left_encoder_phaseA 21
#define rear_left_encoder_phaseB 22
#define rear_right_encoder_phaseA 34
#define rear_right_encoder_phaseB 33

// Contadores de Ticks dos Encoders
volatile unsigned int front_left_encoder_counter = 0;
volatile unsigned int front_right_encoder_counter = 0;
volatile unsigned int rear_left_encoder_counter = 0;
volatile unsigned int rear_right_encoder_counter = 0;

// Variáveis para o cálculo de velocidade
double measuredVelocity = 0.0;
double motorOutput = 0.0;
double cmdVelocity = targetVelocity;

// Parâmetros do PID 
double Kp=10.0, Ki=7.5, Kd=0.1;

// Objeto PID
PID motorPID(&measuredVelocity, &motorOutput, &cmdVelocity, Kp, Ki, Kd, DIRECT);

// Variáveis para controle de tempo
unsigned long last_millis = 0;
const unsigned long interval = 100;

// Enum para facilitar a leitura do código
enum {
  FRONT_LEFT_MOTOR,
  FRONT_RIGHT_MOTOR,
  REAR_LEFT_MOTOR,
  REAR_RIGHT_MOTOR
};


void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando Teste de Sintonia do PID...");

  setupPins();
  setupInterrupts();

  setMotorDirection(motorToTune, true);

  motorPID.SetOutputLimits(0, 255);
  motorPID.SetSampleTime(interval);
  motorPID.SetMode(AUTOMATIC);

  Serial.println("Motor selecionado para teste: " + getMotorName(motorToTune));
  Serial.println("Velocidade Alvo: " + String(targetVelocity) + " rad/s");
  Serial.println("Para ajustar, envie 'p=VALOR', 'i=VALOR' ou 'd=VALOR'");
}

void loop() {
  if (Serial.available() > 0) {
    parseSerialInput();
  }

  unsigned long current_millis = millis();
  if (current_millis - last_millis >= interval) {
    measuredVelocity = calculateVelocity(motorToTune);
    resetEncoderCount(motorToTune);
    motorPID.Compute();
    applyMotorOutput(motorToTune, motorOutput);
    printStatus();
    last_millis = current_millis;
  }
}

// --- Funções Auxiliares ---

void parseSerialInput() {
  String input = Serial.readStringUntil('\n');
  input.trim();
  char command = input.charAt(0);
  String valueStr = input.substring(input.indexOf('=') + 1);
  double value = valueStr.toDouble();

  switch(command) {
    case 'p':
      Kp = value;
      motorPID.SetTunings(Kp, Ki, Kd);
      Serial.println("Novo Kp: " + String(Kp));
      break;
    case 'i':
      Ki = value;
      motorPID.SetTunings(Kp, Ki, Kd);
      Serial.println("Novo Ki: " + String(Ki));
      break;
    case 'd':
      Kd = value;
      motorPID.SetTunings(Kp, Ki, Kd);
      Serial.println("Novo Kd: " + String(Kd));
      break;
    default:
      Serial.println("Comando inválido. Use 'p=VALOR', 'i=VALOR' ou 'd=VALOR'");
  }
}

double calculateVelocity(int motor) {
  unsigned int encoder_counter = 0;
  switch (motor) {
    case FRONT_LEFT_MOTOR:  encoder_counter = front_left_encoder_counter; break;
    case FRONT_RIGHT_MOTOR: encoder_counter = front_right_encoder_counter; break;
    case REAR_LEFT_MOTOR:   encoder_counter = rear_left_encoder_counter; break;
    case REAR_RIGHT_MOTOR:  encoder_counter = rear_right_encoder_counter; break;
  }
  return (1000.0 / interval) * encoder_counter * (2.0 * PI / 663.0);
}

void resetEncoderCount(int motor) {
    switch (motor) {
    case FRONT_LEFT_MOTOR:  front_left_encoder_counter = 0; break;
    case FRONT_RIGHT_MOTOR: front_right_encoder_counter = 0; break;
    case REAR_LEFT_MOTOR:   rear_left_encoder_counter = 0; break;
    case REAR_RIGHT_MOTOR:  rear_right_encoder_counter = 0; break;
  }
}

void applyMotorOutput(int motor, double output) {
  switch (motor) {
    case FRONT_LEFT_MOTOR:  analogWrite(left_L298N_enA, output); break;
    case FRONT_RIGHT_MOTOR: analogWrite(right_L298N_enA, output); break;
    case REAR_LEFT_MOTOR:   analogWrite(left_L298N_enB, output); break;
    case REAR_RIGHT_MOTOR:  analogWrite(right_L298N_enB, output); break;
  }
}

void setMotorDirection(int motor, bool forward) {
    switch (motor) {
        case FRONT_LEFT_MOTOR:
            digitalWrite(left_L298N_in1, LOW);
            digitalWrite(left_L298N_in2, HIGH);
            break;
        case FRONT_RIGHT_MOTOR:
            digitalWrite(right_L298N_in1, HIGH);
            digitalWrite(right_L298N_in2, LOW);
            break;
        case REAR_LEFT_MOTOR:
            digitalWrite(left_L298N_in3, HIGH);
            digitalWrite(left_L298N_in4, LOW);
            break;
        case REAR_RIGHT_MOTOR:
            digitalWrite(right_L298N_in3, HIGH);
            digitalWrite(right_L298N_in4, LOW);
            break;
    }
}

String getMotorName(int motor) {
  switch(motor) {
    case FRONT_LEFT_MOTOR:  return "Dianteiro Esquerdo";
    case FRONT_RIGHT_MOTOR: return "Dianteiro Direito";
    case REAR_LEFT_MOTOR:   return "Traseiro Esquerdo";
    case REAR_RIGHT_MOTOR:  return "Traseiro Direito";
    default: return "Desconhecido";
  }
}

void printStatus() {
  Serial.print("Alvo: "); Serial.print(cmdVelocity);
  Serial.print(" | Medida: "); Serial.print(measuredVelocity);
  Serial.print(" | Saida (PWM): "); Serial.println(motorOutput);
}

// --- Funções de Configuração e Interrupção ---

void setupPins() {
  pinMode(left_L298N_enA, OUTPUT); pinMode(left_L298N_in1, OUTPUT); pinMode(left_L298N_in2, OUTPUT);
  pinMode(left_L298N_enB, OUTPUT); pinMode(left_L298N_in3, OUTPUT); pinMode(left_L298N_in4, OUTPUT);
  pinMode(right_L298N_enA, OUTPUT); pinMode(right_L298N_in1, OUTPUT); pinMode(right_L298N_in2, OUTPUT);
  pinMode(right_L298N_enB, OUTPUT); pinMode(right_L298N_in3, OUTPUT); pinMode(right_L298N_in4, OUTPUT);

  pinMode(front_left_encoder_phaseA, INPUT); pinMode(front_left_encoder_phaseB, INPUT);
  pinMode(front_right_encoder_phaseA, INPUT); pinMode(front_right_encoder_phaseB, INPUT);
  pinMode(rear_left_encoder_phaseA, INPUT); pinMode(rear_left_encoder_phaseB, INPUT);
  pinMode(rear_right_encoder_phaseA, INPUT); pinMode(rear_right_encoder_phaseB, INPUT);
}

void setupInterrupts() {
  attachInterrupt(digitalPinToInterrupt(front_left_encoder_phaseA), frontLeftEncoderCallback, RISING);
  attachInterrupt(digitalPinToInterrupt(front_right_encoder_phaseA), frontRightEncoderCallback, RISING);
  attachInterrupt(digitalPinToInterrupt(rear_left_encoder_phaseA), rearLeftEncoderCallback, RISING);
  attachInterrupt(digitalPinToInterrupt(rear_right_encoder_phaseA), rearRightEncoderCallback, RISING);
}

void IRAM_ATTR frontLeftEncoderCallback() { front_left_encoder_counter++; }
void IRAM_ATTR frontRightEncoderCallback() { front_right_encoder_counter++; }
void IRAM_ATTR rearLeftEncoderCallback() { rear_left_encoder_counter++; }
void IRAM_ATTR rearRightEncoderCallback() { rear_right_encoder_counter++; }