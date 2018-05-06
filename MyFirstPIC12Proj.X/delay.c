/******************************************
 * delay.c
 * hesai
 * taojun
 * 2018/5/3
 *****************************************/
#include <stdint.h>

void delay_us(uint16_t t)
{
    uint16_t i;
    uint16_t j;

    for(i=0; i<t; i++)
        for(j=0; j<8; j++);
}
