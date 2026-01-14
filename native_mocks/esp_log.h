#ifndef ESP_LOG_H
#define ESP_LOG_H

#include <stdio.h>

// Mock log macros to satisfy native compiler
#define ESP_LOGE(tag, fmt, ...) printf("ERROR [%s]: " fmt "\n", tag, ##__VA_ARGS__)
#define ESP_LOGW(tag, fmt, ...) printf("WARN  [%s]: " fmt "\n", tag, ##__VA_ARGS__)
#define ESP_LOGI(tag, fmt, ...) printf("INFO  [%s]: " fmt "\n", tag, ##__VA_ARGS__)
#define ESP_LOGD(tag, fmt, ...) printf("DEBUG [%s]: " fmt "\n", tag, ##__VA_ARGS__)
#define ESP_LOGV(tag, fmt, ...) printf("VERB  [%s]: " fmt "\n", tag, ##__VA_ARGS__)

#endif