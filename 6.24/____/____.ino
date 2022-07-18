#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9); //pinMode()
}

void loop() {
  myServo.write(0); //write(angle) : 0 ~ 179도
  delay(2000);
  myServo.write(179);
  delay(2000);
}
