#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    int n = 0;
    for (;;) {
        printf("hola desde oos-build-test: %d\n", n++);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
