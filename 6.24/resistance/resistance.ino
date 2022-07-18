#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(9);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  int mapValue = map(sensorValue,0,1023,0,179);
  servo.write(mapValue);
  
  delay(10);
}
