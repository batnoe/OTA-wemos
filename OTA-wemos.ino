#include <ArduinoOTA.h>

const char* ssid = "DNA-Mokkula-2G-7M3EQF";  // Généralement, "routeur" = "box"
const char* password = "47890783266";

void setup() 
{
  pinMode(13, OUTPUT);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) 
  {
    delay(1000);
    ESP.restart();
  }
  ArduinoOTA.begin();
}

void loop()
{
  ArduinoOTA.handle();
  

}
