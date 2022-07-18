void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn1 = digitalRead(2);
  int btn2 = digitalRead(3);
  int btn3 = digitalRead(4);
  // 1. btn1 =1 -> 11번 analogWrite를 0 만큼 출력
  // 2. btn2 = 1 -> analogWrite를 127만큼 출력

  if (btn1 == 1) {
    analogWrite(11, 0);
  }
  if (btn2 == 1) {
    analogWrite(11, 127);
  }
  if (btn3 == 1) {
    analogWrite(11, 255);
  }


  /*for(int i = 0; i<255; i++){
    analogWrite(11,i);
    delay(10);*/
}
