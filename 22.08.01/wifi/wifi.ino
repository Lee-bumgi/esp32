#include <ArduinoJson.h>

#include <WiFi.h>
#include <HTTPClient.h>

// wifi 아이디 비번
const char* ssid = "AndroidHotspot0975";
const char* password =  "the808bg";
String address = "https://api.openweathermap.org/data/2.5/weather?q=Gwangju&appid=e299ff2f9fb6bdd3df10fc9fe5fb163d&units=metric";
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
      //Serial.println(httpCode);
      result = http.getString();
      //Serial.println(result);
      // Arduino 에서는 JSON형태의 데이터를 다루기 위해서는
      // 특정 메모리 공간이 필요하다.
      // 공간 만드는 법은 2가지 : 정적,동적
      DynamicJsonBuffer jsonBuffer;
      JsonObject& root = jsonBuffer.parseObject(result);
      JsonObject& main = root["main"];
      float temp = main["temp"];
      Serial.print("현재 온도 : ");
      Serial.print(temp);
      Serial.println("도");
    }
  
   

    
//    if (result == "1"){
//      digitalWrite(18,1);
//    } else{
//      digitalWrite(18,0);
//    }
    
    http.end();
  } else {
    Serial.println("Error on HTTP request");
  }
  delay(500);
}
