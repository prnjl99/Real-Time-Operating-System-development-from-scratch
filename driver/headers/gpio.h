#include <stdint.h>
#include "common_driv.h"

#ifndef GPIO_H
#define GPIO_H

void init_GPIO(GPIO_TypeDef * base_addr, uint32_t pin_num);
void toggle_LED(GPIO_TypeDef * base_addr, uint32_t pin_num);
void invert_LED(GPIO_TypeDef * base_addr, uint32_t pin_num);

#endif /* GPIO_H */
