#include "Arduino.h"
#include "avr8-stub.h"

void setup()
{
  // initialize GDB stub
  debug_init();
  pinMode(LED_BUILTIN, OUTPUT);  
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  debug_message("High");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  debug_message("Low");  
  delay(1000);
}
