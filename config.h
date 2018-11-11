/* 
 * File:   config.h
 * Author: Phil Glazzard
 *
 * Created on 01 November 2018, 20:16
 */

#ifndef CONFIG_H
#define	CONFIG_H

void config (void);

// PIC16F690 Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = INTRCIO   // Oscillator Selection bits (INTOSCIO oscillator: I/O function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select bit (MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = OFF      // Brown-out Reset Selection bits (BOR disabled)
#pragma config IESO = OFF       // Internal External Switchover bit (Internal External Switchover mode is disabled)
#pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 4000000

#define SWIP PORTCbits.RC0  // pin 15 switch input
#define RED_LED PORTCbits.RC1   // pin 16 RED_LED output

enum {OFF, BOUNCING_ON, ON, BOUNCING_OFF}state; // OFF, B_ON, ON, B_OFF are named constants
                                                // state is a variable of type enum to track the changing state of the state machine


enum{PUSHED, NOT_PUSHED} button;                // PUSHED = 0, NOT_PUSHED = 1, button is a variable of type enum to track push-button status



enum{LED_OFF, LED_ON} led;          // LED_OFF = 0, LED_ON = 1, led is a variable of type enum to track LED OFF ON status
int num = 0;
int new_state;
int current_state = OFF;
#endif	/* CONFIG_H */

