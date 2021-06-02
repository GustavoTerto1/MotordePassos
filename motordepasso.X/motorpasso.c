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

void botoes_init (void)
{
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD1 = 0;
    PORTDbits.RD0 = 0;
    PORTDbits.RD1 = 0;
}


char passos[4] = {0x40, 0x80, 0x10, 0x20};

int passoatual = 0;
char numpassos = 4;

void motorpasso (int numpassos, int t)
{
    
    for ( passoatual=0; passoatual<numpassos; passoatual++ )
    {
        PORTD = passos[passoatual % 4];
        delay(t);
    }
}

char passo[4] = {0x20, 0x10, 0x80, 0x40};

int passoagora = 0;
char qtdpassos = 4;

void motorantpasso (int qtdpassos, int t)
{
    
    for ( passoagora=0; passoagora<qtdpassos; passoagora++ )
    {
        PORTD = passo[passoagora % 4];
        delay(t);
    }
}
