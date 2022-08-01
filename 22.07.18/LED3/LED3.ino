int ledPin = 18;
int ledPin2= 19;
int ledPin3 =23;
void setup() {
  ledcSetup(0, 5000, 10); // ch, freq, resolution
  ledcAttachPin(ledPin, 0); // (핀번호, 채널)
  ledcAttachPin(ledPin2, 0);
  ledcAttachPin(ledPin3, 0);
}

void loop() {
  ledcWrite(0, 0);
  delay(1000);
  ledcWrite(0,512);
  delay(1000);
  ledcWrite(0,1023);
  delay(1000);
}
