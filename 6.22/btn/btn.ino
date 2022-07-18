void setup() {
  //INPUT은 생략가능
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);

  Serial.begin(9600); //시리얼 모니터를 사용하기 위해
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {  
  int btnState1 = digitalRead(2);
  int btnState2 = digitalRead(3);
  int btnState3 = digitalRead(4);
  
  digitalWrite(13, btnState1);
  Serial.print(btnState1);
  

  digitalWrite(12, btnState2);
  Serial.print(btnState2);
  

  digitalWrite(11, btnState3);
  Serial.println(btnState3);
  delay(10);  
}

 //if (btnState ==1){
  //  digitalWrite(13,1);
  //}
  //else{
  //  digitalWrite(13,0);
  //}
  //digitalWrite(13, btnState);
  //delay(10);
