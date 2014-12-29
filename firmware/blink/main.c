#define GetSystemClock()            32000000UL
#define GetPeripheralClock()        (GetSystemClock())
#define GetInstructionClock()       (GetSystemClock() / 2)

#include "Compiler.h"
#include "timer.h"
#include "platform.h"

int main() {
  led_init();

  for(;;){
    led_on();
    DelayMs(500);
    led_off();
    DelayMs(500);
  }

  return 0;
}
