#include <Arduino.h>

// Onboard LED pin. Usually 2 on generic boards.
// Change to 13, 21, or 22 if yours is different.
#define LED_PIN 2

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    Serial.println("ESP32 Dev Board Initialized!");
}

void loop() {
    Serial.println("LED ON");
    digitalWrite(LED_PIN, HIGH);
    delay(1000);

    Serial.println("LED OFF");
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
