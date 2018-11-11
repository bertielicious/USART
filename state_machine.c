#include "config.h"
void state_machine()
{
   
   
    switch (current_state)
    {
        case OFF:
        {
            if(SWIP == NOT_PUSHED)          // a
            {
                current_state = OFF;
                RED_LED = 0;
                
            }
            else         // b
            {
                current_state = BOUNCING_ON;
                
                RED_LED = 0;
                
            }
        }
        break;
        case BOUNCING_ON:
        {
            if(SWIP == NOT_PUSHED)          // c
            {
                current_state = OFF;
                RED_LED = 0;
                
            }
            else       // d
            {
                current_state = ON;
                RED_LED = 0;
              
            }
        }
        break;
        case ON:
        {
        
            if(SWIP == PUSHED)          // x
            {
                current_state = ON;
                RED_LED = 1;
                
            }
            else          // e
            {
                current_state = BOUNCING_OFF;
                RED_LED = 0;
               
            }
        }
        break;
        case BOUNCING_OFF:
        {
            if(SWIP == NOT_PUSHED)          // f
            {
                current_state = OFF;
                RED_LED = 0;
                
            }
            else          // g
            {
                current_state = BOUNCING_OFF;
                RED_LED = 0;
                
            }
        }
        break;
    }
}
