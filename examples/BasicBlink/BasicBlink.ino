#include <LEDBlink_PEELAPHAT.h>

LEDBlink_PEELAPHAT led;

void setup() {
  // Nothing needed here
}

void loop() {
  Serial.println(led.Set_LED_Blink(13, 500)); // Blink every 500ms
}
