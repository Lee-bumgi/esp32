/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

// the loop routine runs over and over again forever:
//void loop() {
//  int sensorValue = analogRead(A0);
//  Serial.println(sensorValue);
//  if (sensorValue >800){
//    digitalWrite(9,0);
//  }
//  else if (sensorValue>600){
//    analogWrite(9,100);
//  }
//  else{
//    digitalWrite(9,1);
//  }
//  delay(10);
//}
void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  for (int i = 0; i <= 1000; i++) {
      analogWrite(9, 255 - ((sensorValue-1000)-i));
      delay(10);
    }
}
