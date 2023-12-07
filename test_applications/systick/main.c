#include "startup.h"
#include "common.h"
#include "gpio.h"

#define M_THOUSAND 1000UL
#define MAIN_FREQ  (16*M_THOUSAND*M_THOUSAND)
#define DIV_FACTOR M_THOUSAND

int main(void)
{
    systick_init(400000);
    uint32_t timer=0UL, period = 50UL;
    while(1UL)
    {
        if (timer_expired(&timer, period, s_ticks))
        {
            invert_LED();
        }
    }
}

void User_intr_handler(void)
{
    while(1){};
}
