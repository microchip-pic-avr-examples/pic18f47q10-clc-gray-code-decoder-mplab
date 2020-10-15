#include "application.h"

#define DEGREE_STEPS 2250
#define DEG_SYMBOL 0xDF

void ApplicationInit(void)
{  
    lcd_setContrast(0x20);    //Set the LCD Contrast for Clear visibility 
    lcd_clearDisplay();       //Clear the LCD Memory if Memory filled with any previous value
    User_lcd_writeString((char*)"Angle:          ",0,0);
    User_lcd_writeString((char*)"Decoded value:  ",1,0);  
}


void GDapplication(void)
{ 
    uint8_t lcdDataBuffer[8] = {0};
    uint8_t clcData = 0x00;
    uint16_t degree = 0;
   
    //Register CLCDATA have all the available CLC output
    clcData = CLCDATA;                            
    //since CLCDATA register have all 8 CLC's data, masking distributed CLC output data to byte
    clcData = ((clcData & 0x30)>> 2)| (clcData & 0x03) ;   
    // Finding Position degree of Encoder 
    degree = ((DEGREE_STEPS) * (clcData & 0x0F));    //DEGREE_STEP is 22.5 according to spec sheet of Encoder
    sprintf((char*)lcdDataBuffer,"%02d",(clcData & 0x0F));  
    User_lcd_writeString((char*)lcdDataBuffer,1,14);    
    if(degree % 100)                                          //checking after decimal is non zero to show only decimal if imaginary part is zero 
    {
       sprintf((char*)lcdDataBuffer,"%3d.%02d%c",(degree/100),(degree%100),DEG_SYMBOL);  // 0xDF is hex value of degree symbol 
    }
    else
    {
       sprintf((char*)lcdDataBuffer,"%3d%c   ",(degree/100),DEG_SYMBOL);  
    }
    User_lcd_writeString((char*)lcdDataBuffer,0,9);
}

void User_lcd_writeString(char* string, uint8_t row, uint8_t column) {
    lcd_setAddr(row, column);
    uint8_t i = 0;
    for (i = 0; i < 16; i++) {
        if (string[i]) {
            lcd_writeChar(string[i]);
        }
    }
    lcd_returnHome();
}
