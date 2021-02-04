Relevant links

https://docs.platformio.org/en/latest/plus/debug-tools/avr-stub.html#debugging-tool-avr-stub 
https://docs.platformio.org/en/latest/boards/atmelavr/megaatmega2560.html

Debugger limitations
- One external interrupt pin must be reserved for the debugger.
- Any part of your application that uses the UART module (e.g. Arduino Serial class) cannot be used in your program together with the debugger.
- When using flash breakpoints the watchdog cannot be used.

More detailed information can be found in the Important limitations of the debugger section in the official documentation (https://github.com/jdolinay/avr_debug/blob/master/doc/avr_debug.pdf).

