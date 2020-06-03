#ifndef __HELLO_H__
#define __HELLO_H__


#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

void hello_task(void *pvParameter);

#endif