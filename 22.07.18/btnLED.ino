int ledPin = 18;
int btn = 26;
void setup() {
 pinMode(ledPin,OUTPUT);
 pinMode(btn,INPUT);
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnState = digitalRead(btn);
  Serial.println(btnState);
  delay(10);
  if(btnState ==1){
    digitalWrite(ledPin, 1);
  }
  else{
    digitalWrite(ledPin,0);
  }
  //digitalWrite(ledPin,btnState);

  
}
