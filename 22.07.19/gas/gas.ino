int gas = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(gas, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int gasValue = analogRead(gas);
  Serial.println(gasValue);
  delay(20);
}
