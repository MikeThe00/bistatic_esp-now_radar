#include "stdio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main() {
    //for testing will change later
    vTaskDelay(pdMS_TO_TICKS(2000)); 

    printf("Hello World\n");
}