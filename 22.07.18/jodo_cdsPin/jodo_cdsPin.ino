int cdsPin = 4;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(cdsPin); // range : 0~4095(12bit)
  Serial.println(value);
  delay(10);
}
