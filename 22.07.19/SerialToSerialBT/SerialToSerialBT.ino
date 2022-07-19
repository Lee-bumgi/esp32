#include "BluetoothSerial.h"
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
BluetoothSerial SerialBT;
int ledPin = 18;
void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32BK"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  pinMode(ledPin,OUTPUT);
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    char c = SerialBT.read();
    if (c=='1'){
      digitalWrite(ledPin,1);
    }else if(c=='0'){
      digitalWrite(ledPin,0);
    }
    Serial.write(c);
  }
  delay(20);
}
