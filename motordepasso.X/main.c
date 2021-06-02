#include <xc.h>
#include "config.h"
#include "motorpasso.h"
#include "delay.h"

void main (void)
{
    motorpasso_init();
    
    while( 1 )
    {
        motorpasso(48, 100);
    }
    return;
}
