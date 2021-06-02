#include "config.h"
#include <xc.h>
#include "delay.h"

void motorpasso_init ( void )
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD4 = 0;
    PORTDbits.RD7 =0;
    PORTDbits.RD6 =0;
    PORTDbits.RD5 =1;
    PORTDbits.RD4 =0;
}

char passos[4] = {0x40, 0x80, 0x10, 0x20};
int passoatual = 0;

void motorpasso (int numpassos, int t)
{
    
    for ( passoatual=0; passoatual<numpassos; passoatual++ )
    {
        PORTD = passos[passoatual % 4];
        delay(t);
    }
}
