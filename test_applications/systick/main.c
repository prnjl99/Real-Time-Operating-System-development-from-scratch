#include "common_driv.h"
#include "gpio.h"
#include "systick.h"

#define M_THOUSAND 1000UL
#define MAIN_FREQ  (80*M_THOUSAND*M_THOUSAND)
#define DIV_FACTOR M_THOUSAND
#define ONE_SECOND (MAIN_FREQ/DIV_FACTOR)

int main(void)
{
	/* Generate interrupt after each 4 sec */
	/* ?Multiply by 50 */
    systick_init(4*50*ONE_SECOND);
    while(1UL)
    {
        if (s_ticks==1)
        {
        	//__asm volatile ("BKPT #0");
            invert_LED();
			s_ticks=0;
        }
    }
}

void User_intr_handler(void)
{
    while(1){};
}
