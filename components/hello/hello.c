#include "hello.h"

void hello_task(void *pvParameter)
{
	for(;;)
	{
		printf("test task\n");
	    vTaskDelay(2000 / portTICK_RATE_MS);
	}
}