#ifndef __BLINKY_H__
#define __BLINKY_H__


#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/gpio.h"

#define BLINK_GPIO 2

void blink_task(void *pvParameter);

#endif