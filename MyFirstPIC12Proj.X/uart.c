/****************************************************
 * uart.c
 * hesai
 * taojun
 * 2018/5/3
 * v0.0
 ***************************************************/
#include <stdint.h>
#include <stdio.h>
#include "mcc_generated_files/mcc.h"

void sendString(const char* str)
{
    while( *str != '\0' )
        EUSART_Write(*str++);

}

void addlog(const char *tmp, const uint16_t data)
{
    char buf[40];

    sprintf(buf, tmp, data);
    sendString(buf);
}