/*
 * File:   delay.c
 * Author: 20185147
 *
 * Created on 17 de Fevereiro de 2021, 16:47
 */


#include <xc.h>
#include "delay.h"

void delay ( unsigned int t ) 
{
    while ( t )
    {
        --t;
        __delay_ms(1); 
    }
}