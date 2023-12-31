#include <thread.h>

#ifndef SPINLOCK_H
#define SPINLOCK_H

/* APIs to initialize, set and wait for spinlock */
void p_os_semaphore_init(int32_t *semaphore, int32_t value);
void p_os_signal_set(int32_t *semaphore);
void p_os_signal_wait(int32_t *semaphore);

#endif /* SPINLOCK_H */
