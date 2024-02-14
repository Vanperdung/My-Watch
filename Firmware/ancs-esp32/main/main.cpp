#include <iostream>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include <inttypes.h>

#define TAG "MAIN.CPP"

extern "C" void app_main(void)
{
    while (1)
    {
        ESP_LOGI(TAG, "TEST");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
