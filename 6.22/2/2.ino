// 1.setup에 13번핀을 출력모드로 설정
// 2. 13번 핀에 + 신호 보내서 LED를 켜자!
// 3. 1초간 지속시키자.
// 4. 13번핀에 -신호를 보내서 LED를 끄자!
// 5. 1초간 지속
void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,1);
  delay(1000);
  digitalWrite(13,0);
  delay(1000);
}







  
  /*
  void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  for (int i = 10; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  int num = 200;

  for (int i = 10; i<=13; i++){
  digitalWrite(i,i%2);
  digitalWrite(i,1-(i%2);
  digitalWrite(13, HIGH); // 13번핀에 +를 출력하자
  digitalWrite(12, LOW); // 12번핀에 -를 출력하자
  digitalWrite(11, HIGH); // 13번핀에 +를 출력하자
  digitalWrite(10, LOW); // 12번핀에 -를 출력하자
  delay(num); // 코드를 num만큼 지연시키자!!
  digitalWrite(13, LOW); // 13번핀에 -를 출력하자
  digitalWrite(12, HIGH); // 12번핀에 +를 출력하자
  digitalWrite(11, LOW); // 13번핀에 -를 출력하자
  digitalWrite(10, HIGH); // 12번핀에 +를 출력하자
  delay(num); // 코드를 num만큼 지연시키자!!
 
  
  }*/
