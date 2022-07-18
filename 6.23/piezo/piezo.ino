void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}
void loop() { 
  //핀번호,주파수,시간
  int btnState1 = digitalRead(3);
  int btnState2 = digitalRead(4);
  int btnState3 = digitalRead(5);
  int btnState4 = digitalRead(6);
  int btnState5 = digitalRead(7);
  if (btnState1 == 1) {
    tone(8, 262, 100);
  }
  if (btnState2 == 1) {
    tone(8, 294, 100);
  }
  if (btnState3 == 1) {
    tone(8, 330, 100);
  }
  if (btnState4 == 1) {
    tone(8, 349, 100);
  }
  if (btnState5 == 1) {
    tone(8, 392, 100);
  }
  Serial.println(btnState1);
  Serial.println(btnState2);
  Serial.println(btnState3);
  Serial.println(btnState4);
  Serial.println(btnState5);
  delay(10);
}
