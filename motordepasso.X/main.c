#include <xc.h>
#include "config.h"
#include "motorpasso.h"
#include "delay.h"

#define  S1   PORTDbits.RD0
#define  S2   PORTDbits.RD1

void main (void)  
{
    
    int estado = 0;
    
    while( 1 )
    {
        switch(estado)
        {
            case 0:
                estado = 1;
                break;
            case 1:
                if (S1 == 1)
                    estado = 2;
                if (S2 == 1)
                    estado = 3;
                break;
            case 2:
                motorpasso_init();
                motorpasso(48, 100);
                if (S2 ==1)
                estado = 1;
                break;
            case 3:
                motorpasso_init();
                motorantpasso(48, 100);
                if (S2 == 1)
                estado = 1;
                break;
        }
    }
    return;
}
