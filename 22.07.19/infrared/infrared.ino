int pirPin = 27;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pirPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(pirPin);
  if(sensorValue== 0){
    Serial.println("Detected");
    delay(500);
  } else{
    Serial.println("Undetected");
  }
  delay(10);
}
