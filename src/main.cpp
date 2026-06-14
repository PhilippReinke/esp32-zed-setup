#include "BluetoothSerial.h"

#define LED_PIN 2
BluetoothSerial SerialBT;

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    SerialBT.begin("ESP32-LED");   // Bluetooth device name
    Serial.println("Bluetooth started! Pair with 'ESP32-LED'");
}

void loop() {
    if (SerialBT.available()) {
        String cmd = SerialBT.readStringUntil('\n');
        cmd.trim();

        if (cmd == "on")  { digitalWrite(LED_PIN, HIGH); SerialBT.println("LED is ON"); }
        if (cmd == "off") { digitalWrite(LED_PIN, LOW);  SerialBT.println("LED is OFF"); }
    }
}
