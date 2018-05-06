/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB?Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB?Code Configurator - v2.25.2
        Device            :  PIC12F1822
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
*/

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set TX aliases
#define TX_TRIS               TRISA0
#define TX_LAT                LATA0
#define TX_PORT               RA0
#define TX_WPU                WPUA0
#define TX_ANS                ANSA0
#define TX_SetHigh()    do { LATA0 = 1; } while(0)
#define TX_SetLow()   do { LATA0 = 0; } while(0)
#define TX_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define TX_GetValue()         RA0
#define TX_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define TX_SetPullup()    do { WPUA0 = 1; } while(0)
#define TX_ResetPullup()   do { WPUA0 = 0; } while(0)
#define TX_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define TX_SetDigitalMode()   do { ANSA0 = 0; } while(0)
// get/set RX aliases
#define RX_TRIS               TRISA1
#define RX_LAT                LATA1
#define RX_PORT               RA1
#define RX_WPU                WPUA1
#define RX_ANS                ANSA1
#define RX_SetHigh()    do { LATA1 = 1; } while(0)
#define RX_SetLow()   do { LATA1 = 0; } while(0)
#define RX_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define RX_GetValue()         RA1
#define RX_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define RX_SetPullup()    do { WPUA1 = 1; } while(0)
#define RX_ResetPullup()   do { WPUA1 = 0; } while(0)
#define RX_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define RX_SetDigitalMode()   do { ANSA1 = 0; } while(0)
// get/set channel_AN2 aliases
#define channel_AN2_TRIS               TRISA2
#define channel_AN2_LAT                LATA2
#define channel_AN2_PORT               RA2
#define channel_AN2_WPU                WPUA2
#define channel_AN2_ANS                ANSA2
#define channel_AN2_SetHigh()    do { LATA2 = 1; } while(0)
#define channel_AN2_SetLow()   do { LATA2 = 0; } while(0)
#define channel_AN2_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define channel_AN2_GetValue()         RA2
#define channel_AN2_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define channel_AN2_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define channel_AN2_SetPullup()    do { WPUA2 = 1; } while(0)
#define channel_AN2_ResetPullup()   do { WPUA2 = 0; } while(0)
#define channel_AN2_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define channel_AN2_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set P1B aliases
#define P1B_TRIS               TRISA4
#define P1B_LAT                LATA4
#define P1B_PORT               RA4
#define P1B_WPU                WPUA4
#define P1B_ANS                ANSA4
#define P1B_SetHigh()    do { LATA4 = 1; } while(0)
#define P1B_SetLow()   do { LATA4 = 0; } while(0)
#define P1B_Toggle()   do { LATA4 = ~LATA4; } while(0)
#define P1B_GetValue()         RA4
#define P1B_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define P1B_SetDigitalOutput()   do { TRISA4 = 0; } while(0)

#define P1B_SetPullup()    do { WPUA4 = 1; } while(0)
#define P1B_ResetPullup()   do { WPUA4 = 0; } while(0)
#define P1B_SetAnalogMode()   do { ANSA4 = 1; } while(0)
#define P1B_SetDigitalMode()   do { ANSA4 = 0; } while(0)
// get/set P1A aliases
#define P1A_TRIS               TRISA5
#define P1A_LAT                LATA5
#define P1A_PORT               RA5
#define P1A_WPU                WPUA5
#define P1A_SetHigh()    do { LATA5 = 1; } while(0)
#define P1A_SetLow()   do { LATA5 = 0; } while(0)
#define P1A_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define P1A_GetValue()         RA5
#define P1A_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define P1A_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define P1A_SetPullup()    do { WPUA5 = 1; } while(0)
#define P1A_ResetPullup()   do { WPUA5 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/