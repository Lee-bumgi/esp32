#include <WiFi.h>
#include <HTTPClient.h>
// wifi 아이디 비번
const char* ssid = "AndroidHotspot0975";
const char* password =  "the808bg";
String address = "http://192.168.185.212:5050/led";
String result = "";
HTTPClient http;
void setup() {
  Serial.begin(115200);
  pinMode(18,OUTPUT);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println("Connected to the WiFi network");
}
void loop() {
  if ((WiFi.status() == WL_CONNECTED)) { //Check the current connection status
    http.begin(address);
    int httpCode = http.GET();
    if (httpCode > 0) {
      Serial.println(httpCode);
      result = http.getString();
      Serial.println(result);
    }
    if (result == "1"){
      digitalWrite(18,1);
    } else{
      digitalWrite(18,0);
    }
    
    http.end();
  } else {
    Serial.println("Error on HTTP request");
  }
  delay(500);
}
