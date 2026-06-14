# ESP32 Development

**Bluetooth Example**

- Pair Android phone with "ESP32-LED".
- Download "Serial Bluetooth Terminal" app for Android.
- Send "on" or "off".

## Setup

Zed editor on mac with PlatformIO.

```sh
brew install platformio
```

Compilation database for autocomplete

```sh
pio run -t compiledb
```

Test it with `cmd + shift + r` to run commands.

## Libs

[ESP32 Libs](https://docs.espressif.com/projects/arduino-esp32/en/latest/libraries.html)

## Details on board

**ESP32 HW-394**

Xtensa dual-core 32-bit LX6 · 240 MHz

The ESP32 HW-394 (WR-32) is a compact development board based on the ESP32 
WROOM-32 module, featuring integrated Wi-Fi 802.11 b/g/n and Bluetooth 4.2 + BLE
for seamless wireless connectivity. 📶

With a dual-core Xtensa 32-bit LX6 processor running up to 240 MHz, 4MB flash 
memory, and 520KB SRAM, it's perfect for IoT projects, home automation, and 
embedded applications. ⚡

The board offers 34 GPIO pins with support for ADC (18 channels, 12-bit), DAC
(2 channels), PWM, and various communication interfaces including UART, SPI, 
I2C, I2S, CAN, and Ethernet MAC. 🔌

Operating at 3.3V with ultra-low power consumption in deep sleep mode (as low 
as 10 µA), it's ideal for battery-powered devices. 🔋 Compact dimensions of 
18mm x 25.5mm make it suitable for space-constrained designs. 📏
