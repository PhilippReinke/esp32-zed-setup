#include <WiFi.h>
#include "secrets.h"

const char* ssid     = WIFI_SSID;
const char* password = WIFI_PASSWORD;

#define LED_PIN 2

WiFiServer server(80);

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);

    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) { delay(500); Serial.print("."); }

    Serial.print("\nOpen this in your browser: http://");
    Serial.println(WiFi.localIP());
    server.begin();
}

void loop() {
    WiFiClient client = server.available();
    if (!client) return;

    String req = client.readStringUntil('\r');
    client.read(); // skip newline

    if (req.indexOf("/on") != -1)  digitalWrite(LED_PIN, HIGH);
    if (req.indexOf("/off") != -1) digitalWrite(LED_PIN, LOW);

    // Send HTML page
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println();
    client.println("<h1>ESP32 LED Control</h1>");
    client.println("<a href=\"/on\"><button>ON</button></a>");
    client.println("<a href=\"/off\"><button>OFF</button></a>");
    client.stop();
}
