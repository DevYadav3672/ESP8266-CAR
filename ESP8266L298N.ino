#include<ESP8266WiFi.h>


#define ssid "ESP8266 CAR"
#define password "Ydp6361#"

WiFiServer server(80);

void setup(){
  Serial.begin(9600);
  WiFi.softAP(ssid,password);
  server.begin();

  Serial.println("wifi is created!");
  Serial.print("IP : ");
  Serial.println(WiFi.softAPIP());
}

void loop(){

  WiFiClient client = server.available();

  if (client){
    Serial.println("Client is connected!");

    String command = client.readStringUntil('\r');
    client.flush();

    int index = command.indexOf("?State=");

    if (index != -1) {
      char c = command.charAt(index + 7);
      Serial.print("pure data : ");
      Serial.println(c);
    }
    client.stop();
  }
}