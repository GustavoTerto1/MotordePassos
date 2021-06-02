#include <xc.h>
#include "config.h"
#include "motorpasso.h"

void main (void)
{
    motorpasso_init();
    
    while( 1 )
    {
        motorpasso_init();
    }
    return;
}
