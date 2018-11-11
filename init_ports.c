
#include <pic16f690.h>

void init_ports(void)
{
    ANSEL = 0x00;           // ADC module switched off
    ANSELH = 0x00;
    TRISCbits.TRISC0 = 1;   // pushbutton input pin 16
    TRISCbits.TRISC1 = 0;   // RED_LED output pin 15
    PORTCbits.RC1 = 0;
}
