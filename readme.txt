Relevant links

https://docs.platformio.org/en/latest/plus/debug-tools/avr-stub.html#debugging-tool-avr-stub 
https://docs.platformio.org/en/latest/boards/atmelavr/megaatmega2560.html

Debugger limitations
- One external interrupt pin must be reserved for the debugger.
- Any part of your application that uses the UART module (e.g. Arduino Serial class) cannot be used in your program together with the debugger.
- When using flash breakpoints the watchdog cannot be used.

More detailed information can be found in the Important limitations of the debugger section in the official documentation (https://github.com/jdolinay/avr_debug/blob/master/doc/avr_debug.pdf).



Some additional notes after experimentation with Arduino Mega:

Flash (so virtually limitless) breakpoints can be set and removed at runtime (using PlatformIO IDE, not Arduino IDE).
No need for hardware debuggers as the USB host becomes the hardware debugger (by adding a special bootloader section to your code)
Not a full fledged debugger, nor programmer. Cannot set fuses, no ICSP,JTAG,SWD,etc, so limited applications.
Cannot use serial monitor in IDE, so requires eg Serial1 rerouted to external display to visualize serial data.
The use case for this solution is great for low cost entry to hardware debugging and education on debugging hardware using breakpoints.








