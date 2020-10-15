/*
 * File:   application.c
 * Author: I62418
 *
 * Created on October 8, 2020, 12:34 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "mcc_generated_files/lcd_example.h"
#include "mcc_generated_files/mcc.h"
/**
   @Param
    void
   @Returns
    void
   @Description
    API to execute main application functionality of the project.
    API can read Data from corresponding CLC's and Print the same data on Mini LCD.
   @Example
    None
 */    
void GDapplication(void);
  /**
   @Param
   void
   @Returns
   void
   @Description
   API to initialize the application functionalities.
   @Example
   None
 */
void ApplicationInit(void);

void User_lcd_writeString(char* string, uint8_t row, uint8_t column);

#ifdef	__cplusplus
}
#endif

#endif	/* APPLICATION_H */