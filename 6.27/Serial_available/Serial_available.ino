void setup() {
  Serial.begin(9600); //9600은 통신속도
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {

    //read()함수는 반드시 char나 int로 꺼내서 사용해야한다. 왜냐면 삭제되기 때문에.
    //    void loop() {
    //  if (Serial.available()) {
    //    if (Serial.read() == '1') {
    //      digitalWrite(13, 1 );
    //    } else if (Serial.read() == '0') {
    //      digitalWrite(Serial.parseInt(), 0);
    //    }
    //    Serial.println(num);
    //  }

    //문자열로 저장한 경우
    //char c = Serial.read();
    //    if (c == '1') {
    //      digitalWrite(13, 1 );
    //    } else if (c == '0') {
    //      digitalWrite(13, 0);
    //    }
    //    Serial.println(c);

    int num = Serial.parseInt();
    if (num == 1) {
      digitalWrite(13, 1 );
    } else if (num == 0) {
      digitalWrite(13, 0);
    }
    Serial.println(num);
  }
}
