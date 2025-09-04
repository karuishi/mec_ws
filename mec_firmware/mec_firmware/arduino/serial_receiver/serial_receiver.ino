#define LED 2  // Na maioria dos ESP32 o LED interno está no pino 2
              // (se não piscar, tente LED_BUILTIN ou outro pino conforme sua placa)

void setup() {
  pinMode(LED, OUTPUT); // Define o pino como saída
  digitalWrite(LED,HIGH);
  Serial.begin(115200);
  Serial.println("Serial configurada");
}

void loop() {
  Serial.println("Loop rodando");
  Serial.println(Serial.available());
  Serial.println(Serial.available());
  if (Serial.available()>0) {
    String s = Serial.readStringUntil('\n');
    Serial.println(s);
    int x=s.toInt();
    if (x==0) {
      digitalWrite(LED, LOW);  // Desliga o LED
    }
    else {
      digitalWrite(LED, HIGH); // Liga o LED
    }
  }
  delay(10000);
}
