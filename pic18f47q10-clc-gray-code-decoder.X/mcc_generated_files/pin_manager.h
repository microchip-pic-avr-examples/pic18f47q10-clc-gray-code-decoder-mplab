/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.4
        Device            :  PIC18F47Q10
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.20 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LCDMini_nCS2 aliases
#define LCDMini_nCS2_TRIS                 TRISAbits.TRISA0
#define LCDMini_nCS2_LAT                  LATAbits.LATA0
#define LCDMini_nCS2_PORT                 PORTAbits.RA0
#define LCDMini_nCS2_WPU                  WPUAbits.WPUA0
#define LCDMini_nCS2_OD                   ODCONAbits.ODCA0
#define LCDMini_nCS2_ANS                  ANSELAbits.ANSELA0
#define LCDMini_nCS2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LCDMini_nCS2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LCDMini_nCS2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LCDMini_nCS2_GetValue()           PORTAbits.RA0
#define LCDMini_nCS2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LCDMini_nCS2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LCDMini_nCS2_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LCDMini_nCS2_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LCDMini_nCS2_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LCDMini_nCS2_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LCDMini_nCS2_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define LCDMini_nCS2_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSELA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSELA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set LCDMini_nReset aliases
#define LCDMini_nReset_TRIS                 TRISAbits.TRISA7
#define LCDMini_nReset_LAT                  LATAbits.LATA7
#define LCDMini_nReset_PORT                 PORTAbits.RA7
#define LCDMini_nReset_WPU                  WPUAbits.WPUA7
#define LCDMini_nReset_OD                   ODCONAbits.ODCA7
#define LCDMini_nReset_ANS                  ANSELAbits.ANSELA7
#define LCDMini_nReset_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LCDMini_nReset_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LCDMini_nReset_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LCDMini_nReset_GetValue()           PORTAbits.RA7
#define LCDMini_nReset_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LCDMini_nReset_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LCDMini_nReset_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LCDMini_nReset_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LCDMini_nReset_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LCDMini_nReset_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LCDMini_nReset_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LCDMini_nReset_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RD2 procedures
#define RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define RD2_GetValue()              PORTDbits.RD2
#define RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define RD2_SetPullup()             do { WPUDbits.WPUD2 = 1; } while(0)
#define RD2_ResetPullup()           do { WPUDbits.WPUD2 = 0; } while(0)
#define RD2_SetAnalogMode()         do { ANSELDbits.ANSELD2 = 1; } while(0)
#define RD2_SetDigitalMode()        do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set RD3 procedures
#define RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define RD3_GetValue()              PORTDbits.RD3
#define RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define RD3_SetPullup()             do { WPUDbits.WPUD3 = 1; } while(0)
#define RD3_ResetPullup()           do { WPUDbits.WPUD3 = 0; } while(0)
#define RD3_SetAnalogMode()         do { ANSELDbits.ANSELD3 = 1; } while(0)
#define RD3_SetDigitalMode()        do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set LCDMini_nCS aliases
#define LCDMini_nCS_TRIS                 TRISDbits.TRISD4
#define LCDMini_nCS_LAT                  LATDbits.LATD4
#define LCDMini_nCS_PORT                 PORTDbits.RD4
#define LCDMini_nCS_WPU                  WPUDbits.WPUD4
#define LCDMini_nCS_OD                   ODCONDbits.ODCD4
#define LCDMini_nCS_ANS                  ANSELDbits.ANSELD4
#define LCDMini_nCS_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define LCDMini_nCS_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define LCDMini_nCS_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define LCDMini_nCS_GetValue()           PORTDbits.RD4
#define LCDMini_nCS_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define LCDMini_nCS_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define LCDMini_nCS_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define LCDMini_nCS_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define LCDMini_nCS_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define LCDMini_nCS_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define LCDMini_nCS_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define LCDMini_nCS_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
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