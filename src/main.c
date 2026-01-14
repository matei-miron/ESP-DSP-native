#include <stdio.h>
#include <stdlib.h>
#include "dsps_dotprod.h" // Ensure this is in your include paths

#ifdef ESP_PLATFORM
#include "esp_log.h"
static const char *TAG = "DSP_EXAMPLE";
void app_main(void)
#else
int main(void)
#endif
{
    const int len = 4;
    float vec1[4] = {1.0f, 2.0f, 3.0f, 4.0f};
    float vec2[4] = {0.5f, 0.5f, 0.5f, 0.5f};
    float result = 0;

    // dsps_dotprod_f32 will use optimized ASM on ESP32 
    // and the ANSI C version on Native/Desktop
    dsps_dotprod_f32(vec1, vec2, &result, len);

#ifdef ESP_PLATFORM
    ESP_LOGI(TAG, "Dot Product Result: %f", result);
#else
    printf("Native Dot Product Result: %f\n", result);
    return 0;
#endif
}
