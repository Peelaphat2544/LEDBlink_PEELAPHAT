# LEDBlink_PEELAPHAT

A simple Arduino library to blink an LED with a specified interval using non-blocking code.

## Usage

```cpp
#include <LEDBlink_PEELAPHAT.h>

LEDBlink_PEELAPHAT led;

void setup() {
  // Nothing needed here
}

void loop() {
  Serial.println(led.Set_LED_Blink(13, 500)); // Blink every 500ms
}
