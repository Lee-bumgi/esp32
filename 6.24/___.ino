#include <Servo.h>

Servo myServo;
int trig = 2;
int echo = 3;

void setup() { 
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  myServo.attach(9);
  
}
void loop() {  
  
  //  1. trig핀을 통해 초음파 출력!
  digitalWrite(trig, 1);
  //  2. 10ms후에 초음파를 출력하지 않는다.
  delay(10);
  digitalWrite(trig, 0);
  //  3. echo의 상태가 변하는 시간을 측정!
  int duration = pulseIn(echo, 1);
  //  4. 시간을 2로 나누자!
  duration = duration / 2;
  //  5. 거리 = 속력 X 시간 을 통해 거리를 측정하자!
  int distance = duration * 0.0343; // 나누기 29.1

  if(distance <= 20){
    myServo.write(90);
    delay(1000);
  }
  else{
    myServo.write(0);
    delay(1000);
  }
//  if (distance >= 5 and distance <= 300) {
//    if ( distance <= 10) {
//      tone(8, 330, 200);
//      Serial.print("거리 : ");
//      Serial.print(distance);
//      Serial.println("cm");
//      delay(300);
//    }
//
//    else {
//      Serial.print("거리 : ");
//      Serial.print(distance);
//      Serial.println("cm");
//      delay(300);
//    }
//  }



  // 1. servo.h 라이브러리 추가
  // 2. myservo 만들기
  // 3. setup()에 attach함수 활용하여 9번핀 servo Motor용으로 설정!
  // 
  // 4. distance 가 20이하일 때, 각도는 90도
  // 5. distance가 20초과 일때, 각도를 0도


}
