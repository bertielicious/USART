#include "config.h"
#include "state_machine.h"
void interrupt isr(void)
{
    if(INTCONbits.T0IF == 1) // 10 ms has elapsed
    {
       state_machine();  
       INTCONbits.T0IF = 0;
    }
   
}
