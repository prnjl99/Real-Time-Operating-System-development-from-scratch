#include "spinlock.h"

/* Initialize a semaphore and provide it a number of tokens: */
void p_os_semaphore_init(int32_t *semaphore, int32_t value)
{
    *semaphore = value;
}

/* Set a semaphore */
void p_os_signal_set(int32_t *semaphore)
{
    /* Atomic operation is required for semaphore set */
    __disable_irq();

    *semaphore += 1;

    __enable_irq();
}

/* Wait for a semaphore */
void p_os_signal_wait(int32_t *semaphore) {
    /* Atomic operation required for semaphore read */
    __disable_irq();

    /* Spin-lock while waiting for semaphore */
    while (*semaphore <= 0) {
        /* Allow SysTick interrupts while waiting */
        __enable_irq();
        __disable_irq();
    }

    /* This releases the semaphore */
    *semaphore -= 1;

    __enable_irq();
}
