#include <WiFi.h>

void setup() {
    Serial.begin(115200);
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);
}

void loop() {
    Serial.println("Scanning...");
    int n = WiFi.scanNetworks();
    Serial.printf("%d networks found:\n", n);
    for (int i = 0; i < n; i++) {
        Serial.printf("  %s (%d dBm) %s\n",
            WiFi.SSID(i).c_str(),
            WiFi.RSSI(i),
            (WiFi.encryptionType(i) == WIFI_AUTH_OPEN) ? "open" : "encrypted");
    }
    delay(5000);
}
