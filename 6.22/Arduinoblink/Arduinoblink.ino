void setup() {

  for (int i = 10; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int n = 300;

  for(int i = 10; i<=13; i++){
    digitalWrite(i,1);
    delay(n);
    digitalWrite(i,0);
  };
  
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
}
