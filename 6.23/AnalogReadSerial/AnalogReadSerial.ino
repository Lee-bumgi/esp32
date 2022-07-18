
void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop() {
  int sensorValue = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);

  int cv1 = map(sensorValue, 0, 1023, 0, 255);
  int cv2 = map(sensorValue2, 0, 1023, 0, 255);
  int cv3 = map(sensorValue3, 0, 1023, 0, 255);

  analogWrite(9,cv1);
  analogWrite(10,cv2);
  analogWrite(11,cv3);

    Serial.print(sensorValue);
    Serial.print("\t");
    Serial.print(sensorValue2);
    Serial.print("\t");
    Serial.println(sensorValue3);

  //double을 해주어야만 사분의 일이 0으로 바뀌지 않는다. 정수가 되버리면 0이 되어서 0을 곱하는 셈이 되어버리니 실수부까지 표현하기 위해 double을 써준다!
  //analogWrite(9,int(sensorValue*(255/(double)1023)));
  //analogWrite(9,sensorValue/4);
  //map(읽어온값, 최소값, 최대값, 변하고 싶은 최소값, 변하고 싶은 최대값);
  //int ch = map(sensorValue,0,1023,0,255);
  //analogWrite(9,ch);

  delay(10);
}
