#include <stdint.h>
#include <stdbool.h>
#include "common_driv.h"

#ifndef SYSTICK_H
#define SYSTICK_H

extern volatile uint32_t s_ticks;

bool timer_expired(uint32_t *t, uint32_t prd, uint32_t now);

static inline void systick_init(uint32_t ticks)
{
    if((ticks - 1UL) > 0xFFFFFFUL)
    {
        return; /* Systick timer is 24 bit */
    }

    SYSTICK->LOAD = ticks - 1UL;
    SYSTICK->VAL = 0UL;
    SYSTICK->CTRL = BIT_POS(0) | BIT_POS(1) | BIT_POS(2);
    RCC->APB2ENR |= BIT_POS(0);
}

#endif /* SYSTICK_H */
