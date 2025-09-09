#include <PID_v1.h>
#define left_L298N_enA 13  //front-left motor
#define left_L298N_in1 25
#define left_L298N_in2 26
#define left_L298N_enB 14 // rear-left motor
#define left_L298N_in3 12
#define left_L298N_in4 27
#define right_L298N_enA 23 // front-right motor
#define right_L298N_in1 19
#define right_L298N_in2 18
#define right_L298N_enB 15 //rear-right motor 
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

// encoders tickś conunter
unsigned int front_left_encoder_counter = 0;
unsigned int front_right_encoder_counter = 0;
unsigned int rear_left_encoder_counter = 0;
unsigned int rear_right_encoder_counter = 0;

// wheels command direction (as read from the received message)
String front_left_cmd_sign = "p";
String front_right_cmd_sign = "p";
String rear_left_cmd_sign = "p";
String rear_right_cmd_sign = "p"; 

// wheels direction as read from the encoders 
String front_left_encoder_sign = "p";
String front_right_encoder_sign = "p";
String rear_left_encoder_sign = "p";
String rear_right_encoder_sign = "p"; 

// wheels' direction 
bool is_front_left_wheel_forward = true;
bool is_front_right_wheel_forward = true;
bool is_rear_left_wheel_forward = true;
bool is_rear_right_wheel_forward = true;


// wheels' measured velocty
double front_left_wheel_meas_vel = 0.0;
double front_right_wheel_meas_vel = 0.0;
double rear_left_wheel_meas_vel = 0.0;
double rear_right_wheel_meas_vel = 0.0;

// wheels' command velocty (as read from the received message)
double front_left_wheel_cmd_vel = 0.0;
double front_right_wheel_cmd_vel = 0.0;
double rear_left_wheel_cmd_vel = 0.0;
double rear_right_wheel_cmd_vel = 0.0;

unsigned long last_millis = 0;
const unsigned long interval = 100; // time period to calculate estimete velocity

// PID instances and variables
// Last motors´ commands
double front_left_wheel_cmd =0.0;
double front_right_wheel_cmd =0.0;
double rear_left_wheel_cmd =0.0;
double rear_right_wheel_cmd =0.0;

// PID parameters
double kp_fl=10.0, ki_fl=7.5, kd_fl=0.1;
double kp_fr=10.0, ki_fr=7.5, kd_fr=0.1;
double kp_rl=10.0, ki_rl=7.5, kd_rl=0.1;
double kp_rr=10.0, ki_rr=7.5, kd_rr=0.1;

// PID Objects instanciation
PID frontLeftMotor(&front_left_wheel_meas_vel, &front_left_wheel_cmd, &front_left_wheel_cmd_vel, kp_fl, ki_fl, kd_fl, DIRECT);
PID frontRightMotor(&front_right_wheel_meas_vel, &front_right_wheel_cmd, &front_right_wheel_cmd_vel, kp_fr, ki_fr, kd_fr, DIRECT);
PID rearLeftMotor(&rear_left_wheel_meas_vel, &rear_left_wheel_cmd, &rear_left_wheel_cmd_vel, kp_rl, ki_rl, kd_rl, DIRECT);
PID rearRightMotor(&rear_right_wheel_meas_vel, &rear_right_wheel_cmd, &rear_right_wheel_cmd_vel, kp_rr, ki_rr, kd_rr, DIRECT);

void setup() {
// setup all pins
setupPins();
// setup wheels´ rotation Direction
setupWheelDirection();
// setup PID mode
setupPIDMode();
// start serial communication
Serial.begin(115200);
}

void loop() {
  if(Serial.available())
  {
    parseMessage(); // parse the message read command velocities sent from ROS2_contrl) 
  }
  // compute measured velocity from encoderś counter
  unsigned long current_millis = millis();
  if (current_millis - last_millis >= interval) 
  {
    // Vel(rpm) = encoder_counter * 60 /(gearbox reduction * pulse_per_revolution)
    front_left_wheel_meas_vel = (1000/interval) * front_left_encoder_counter * (60.0/663.0) * 0.10472;
    front_right_wheel_meas_vel = (1000/interval) * front_right_encoder_counter * (60.0/663.0) * 0.10472;
    rear_left_wheel_meas_vel = (1000/interval) * rear_left_encoder_counter * (60.0/663.0) * 0.10472;
    rear_right_wheel_meas_vel = (1000/interval) * rear_right_encoder_counter * (60.0/663.0) * 0.10472;

    adjust_and_execute_commands();

    String encoder_read = "fl" + front_left_encoder_sign + String(front_left_wheel_meas_vel) + "," + 
                          "fr"+ front_right_encoder_sign + String(front_right_wheel_meas_vel) + "," +
                          "rl" + rear_left_encoder_sign + String(rear_left_wheel_meas_vel) + "," + 
                          "rr"+ rear_right_encoder_sign + String(rear_right_wheel_meas_vel) + ",";    
    String encoder_test = "fln01.00,frp01.00,rlp01.00,rrp01.00,";                                        
    Serial.println(encoder_read);
    last_millis = current_millis;
    front_left_encoder_counter = 0;
    front_right_encoder_counter = 0;
    rear_left_encoder_counter = 0;
    rear_right_encoder_counter = 0;
  }
 

}
void adjust_and_execute_commands()
{
/***********TESTE *************/
// Valores usados para testes do motor 
/*
front_left_cmd_sign="n";
front_right_cmd_sign="n";
rear_left_cmd_sign="n";
rear_right_cmd_sign="n";
front_left_wheel_cmd = 100.0;
front_right_wheel_cmd = 100.0;
rear_left_wheel_cmd = 100.0;
rear_right_wheel_cmd = 100.0;
is_front_left_wheel_forward = true;
is_front_right_wheel_forward = true;
is_rear_left_wheel_forward = true;
is_rear_right_wheel_forward = true;

*/
// setup wheels' direction based on cmd_sign
// front-left motor
if (front_left_cmd_sign == "p" && !is_front_left_wheel_forward)
{
  // invert the direction of the front-left motor
  //digitalWrite(left_L298N_in1, HIGH - digitalRead(left_L298N_in1)); 
  //digitalWrite(left_L298N_in2, HIGH - digitalRead(left_L298N_in2)); 
  digitalWrite(left_L298N_in1, LOW); 
  digitalWrite(left_L298N_in2, HIGH);  
  is_front_left_wheel_forward = true; 
}
if (front_left_cmd_sign == "n" && is_front_left_wheel_forward)
{
  // invert the direction of the front left motor
  //digitalWrite(left_L298N_in1, HIGH - digitalRead(left_L298N_in1)); 
  //digitalWrite(left_L298N_in2, HIGH - digitalRead(left_L298N_in2)); 
  digitalWrite(left_L298N_in1, HIGH); 
  digitalWrite(left_L298N_in2, LOW); 
  is_front_left_wheel_forward = false; 
}
// front-right motor
if (front_right_cmd_sign == "p" && !is_front_right_wheel_forward)
{
  // invert the direction of the front right motor
  //digitalWrite(right_L298N_in1, HIGH - digitalRead(right_L298N_in1)); 
  //digitalWrite(right_L298N_in2, HIGH - digitalRead(right_L298N_in2)); 
  digitalWrite(right_L298N_in1, HIGH);
  digitalWrite(right_L298N_in2, LOW);
  is_front_right_wheel_forward = true; 
}
if (front_right_cmd_sign == "n" && is_front_right_wheel_forward)
{
  // invert the direction of the front right motor
  //digitalWrite(right_L298N_in1, HIGH - digitalRead(right_L298N_in1)); 
  //digitalWrite(right_L298N_in2, HIGH - digitalRead(right_L298N_in2)); 
  digitalWrite(right_L298N_in1, LOW);
  digitalWrite(right_L298N_in2, HIGH);
  is_front_right_wheel_forward = false; 
}

// rear-left motor
if (rear_left_cmd_sign == "p" && !is_rear_left_wheel_forward)
{
  // invert the direction of the rear left motor
  //digitalWrite(left_L298N_in3, HIGH - digitalRead(left_L298N_in3)); 
  //digitalWrite(left_L298N_in4, HIGH - digitalRead(left_L298N_in4)); 
  digitalWrite(left_L298N_in3, HIGH);
  digitalWrite(left_L298N_in4, LOW);
  is_rear_left_wheel_forward = true; 
}
if (rear_left_cmd_sign == "n" && is_rear_left_wheel_forward)
{
  // invert the direction of the rear left motor
  //digitalWrite(left_L298N_in3, HIGH - digitalRead(left_L298N_in3)); 
  //digitalWrite(left_L298N_in4, HIGH - digitalRead(left_L298N_in4));
  digitalWrite(left_L298N_in3, LOW);
  digitalWrite(left_L298N_in4, HIGH); 
  is_rear_left_wheel_forward = false; 
}
// rear-right motor
if (rear_right_cmd_sign == "p" && !is_rear_right_wheel_forward)
{
  // invert the direction of the rear right motor
  //digitalWrite(right_L298N_in3, HIGH - digitalRead(right_L298N_in3)); 
  //digitalWrite(right_L298N_in4, HIGH - digitalRead(right_L298N_in4)); 
  digitalWrite(right_L298N_in3, HIGH);
  digitalWrite(right_L298N_in4, LOW);
  is_rear_right_wheel_forward = true; 
}
if (rear_right_cmd_sign == "n" && is_rear_right_wheel_forward)
{
  // invert the direction of the rear right motor
  //digitalWrite(right_L298N_in3, HIGH - digitalRead(right_L298N_in3)); 
  //digitalWrite(right_L298N_in4, HIGH - digitalRead(right_L298N_in4)); 
  digitalWrite(right_L298N_in3, LOW);
  digitalWrite(right_L298N_in4, HIGH);
  is_rear_right_wheel_forward = false; 
}
/***********TESTE *************/
/* COMENTADO PARA EFEITO DE TESTES E VALIDAÇÃO DOS MOTORES
// use PID objects to compute the new wheel commands (x_x_wheel_cmd)
*/
frontLeftMotor.Compute(); // compute the new front_left_wheel_cmd
frontRightMotor.Compute(); // compute the new front_right_wheel_cmd
rearLeftMotor.Compute();  // compute the new rear_left_wheel_cmd
rearRightMotor.Compute();  // compute the new rear_right_wheel_cmd

// wheel_cmd_vel=0-> wheel_cmd=0
if (front_left_wheel_cmd_vel == 0.0) 
  front_left_wheel_cmd = 0.0;
if (front_right_wheel_cmd_vel == 0.0) 
  front_right_wheel_cmd = 0.0;
if(rear_left_wheel_cmd_vel == 0.0) 
  rear_left_wheel_cmd_vel = 0.0;
if (rear_right_wheel_cmd_vel == 0.0)
  rear_right_wheel_cmd = 0.0;

// send new wheel commands (x_x_wheel_cmd) to the motor
analogWrite(left_L298N_enA, front_left_wheel_cmd);   // front-left motor
analogWrite(left_L298N_enB, rear_left_wheel_cmd);   // rear-left motor
analogWrite(right_L298N_enA, front_right_wheel_cmd);  //front right motor)
analogWrite(right_L298N_enB, rear_right_wheel_cmd);  //rear right motor)
}
void parseMessage() 
{
    // message format "flp00.00,frp00.00,rlp00.00,rrp00.00,"

  char buffer[64];
  int len = Serial.readBytesUntil('\n', buffer, sizeof(buffer) - 1);
  buffer[len] = '\0';
  int i = 0;
  while (buffer[i] != '\0') 
  {
    // wheelś prefix
    char wheel[3];
    wheel[0] = buffer[i];
    wheel[1] = buffer[i+1];
    wheel[2] = '\0';

    // encoderś sign
    char sign = buffer[i+2];

    // velocity value
    float value = atof(&buffer[i+3]);

    // atribui ao campo correspondente
    if (strcmp(wheel, "fl") == 0) {
      front_left_cmd_sign = (sign == 'p') ? "p" : "n";
      front_left_wheel_cmd_vel = value;
    } else if (strcmp(wheel, "fr") == 0) {
      front_right_cmd_sign = (sign == 'p') ? "p" : "n";
      front_right_wheel_cmd_vel = value;
    } else if (strcmp(wheel, "rl") == 0) {
      rear_left_cmd_sign = (sign == 'p') ? "p" : "n";
      rear_left_wheel_cmd_vel = value;
    } else if (strcmp(wheel, "rr") == 0) {
      rear_right_cmd_sign = (sign == 'p') ? "p" : "n";
      rear_right_wheel_cmd_vel = value;
    }
    // pula até depois da vírgula
    while (buffer[i] != ',' && buffer[i] != '\0') i++;
      if (buffer[i] == ',') i++;
  }
  /*
  // imprime os valores lidos
   Serial.print("FL = "); Serial.print(front_left_encoder_sign);
   Serial.print(" "); Serial.println(front_left_wheel_meas_vel);

  Serial.print("FR = "); Serial.print(front_right_encoder_sign);
  Serial.print(" "); Serial.println(front_right_wheel_meas_vel);

   Serial.print("RL = "); Serial.print(rear_left_encoder_sign);
   Serial.print(" "); Serial.println(rear_left_wheel_meas_vel);

   Serial.print("RR = "); Serial.print(rear_right_encoder_sign);
   Serial.print(" "); Serial.println(rear_right_wheel_meas_vel);
   Serial.println("---------------------");
   */
}
void setupPins() {
  pinMode(left_L298N_enA, OUTPUT); //front-left motor
  pinMode(left_L298N_in1, OUTPUT);
  pinMode(left_L298N_in2, OUTPUT);
  pinMode(left_L298N_enB, OUTPUT); // rear-left motor
  pinMode(left_L298N_in3, OUTPUT);
  pinMode(left_L298N_in4, OUTPUT);
  pinMode(right_L298N_enA, OUTPUT); // front-right motor
  pinMode(right_L298N_in1, OUTPUT);
  pinMode(right_L298N_in2, OUTPUT);
  pinMode(right_L298N_enB, OUTPUT); //rear-right motor 
  pinMode(right_L298N_in3, OUTPUT);
  pinMode(right_L298N_in4, OUTPUT);

  pinMode(front_left_encoder_phaseA, INPUT);  
  pinMode(front_left_encoder_phaseB, INPUT);
  pinMode(front_right_encoder_phaseA, INPUT);  
  pinMode(front_right_encoder_phaseB, INPUT);
  pinMode(rear_left_encoder_phaseA, INPUT);  
  pinMode(rear_left_encoder_phaseB, INPUT);
  pinMode(rear_right_encoder_phaseA, INPUT);  
  pinMode(rear_right_encoder_phaseB, INPUT);

  attachInterrupt(digitalPinToInterrupt(front_left_encoder_phaseA), frontLeftEncoderCallback, RISING);
  attachInterrupt(digitalPinToInterrupt(front_right_encoder_phaseA), frontRightEncoderCallback, RISING);
  attachInterrupt(digitalPinToInterrupt(rear_left_encoder_phaseA), rearLeftEncoderCallback, RISING);
  attachInterrupt(digitalPinToInterrupt(rear_right_encoder_phaseA), rearRightEncoderCallback, RISING);
}


void frontLeftEncoderCallback() 
{
  front_left_encoder_counter++;
  if(digitalRead(front_left_encoder_phaseB) == HIGH) 
  {
    front_left_encoder_sign="n";
  }
  else 
  {
    front_left_encoder_sign="p";
  }
}
void frontRightEncoderCallback() 
{
  front_right_encoder_counter++;
  if(digitalRead(front_right_encoder_phaseB) == HIGH) 
  {
    front_right_encoder_sign="n";
  }
  else 
  {
    front_right_encoder_sign="p";
  }
}
void rearLeftEncoderCallback() 
{
  rear_left_encoder_counter++;
  if(digitalRead(rear_left_encoder_phaseB) == HIGH) 
  {
    rear_left_encoder_sign="n";
  }
  else 
  {
    rear_left_encoder_sign="p";
  }
}
void rearRightEncoderCallback() 
{
  rear_right_encoder_counter++;
  if(digitalRead(rear_right_encoder_phaseB) == HIGH) 
  {
    rear_right_encoder_sign="n";
  }
  else 
  {
    rear_right_encoder_sign="p";
  }
}

void setupWheelDirection() {
// setup all wheels pins to move forward
is_front_left_wheel_forward = true; // left motors rotates CCW to move forwards
digitalWrite(left_L298N_in1, LOW); 
digitalWrite(left_L298N_in2, HIGH);  

is_rear_left_wheel_forward = true; // left motors rotates CCW to move forwards
digitalWrite(left_L298N_in3, HIGH);
digitalWrite(left_L298N_in4, LOW);
  
is_front_right_wheel_forward = true; // right motors rotates CW to move forwards
digitalWrite(right_L298N_in1, HIGH);
digitalWrite(right_L298N_in2, LOW);

is_rear_right_wheel_forward = true; // right motors rotates CW to move forwards
digitalWrite(right_L298N_in3, HIGH);
digitalWrite(right_L298N_in4, LOW);
}
  
void setupPIDMode() {
frontLeftMotor.SetMode(AUTOMATIC);
frontRightMotor.SetMode(AUTOMATIC);
rearLeftMotor.SetMode(AUTOMATIC);
rearRightMotor.SetMode(AUTOMATIC);
}


