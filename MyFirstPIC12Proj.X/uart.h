/* 
 * File:   uart.h
 * Author: sunkai
 *
 * Created on May 3, 2018, 10:02 PM
 */

#ifndef UART_H
#define	UART_H

#include <stdio.h>
#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif

    void sendString(const char *str);
    void addlog(const char *tmp, const uint16_t data);

#ifdef	__cplusplus
}
#endif

#endif	/* UART_H */

