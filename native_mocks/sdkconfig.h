#ifndef SDKCONFIG_H
#define SDKCONFIG_H

#include <stdlib.h>

// 1. Basic DSP configuration
#define CONFIG_DSP_OPTIMIZED_ANSI 1
#define CONFIG_DSP_MAX_FFT_SIZE 4096

// 2. Mock memalign for Native (Redirects to standard malloc)
// Alignment is usually not critical for the ANSI C implementation
#if defined(_WIN32) || defined(_WIN64)
    #include <malloc.h>
    #define memalign(align, size) _aligned_malloc(size, align)
#else
    #define memalign(align, size) malloc(size)
#endif

#endif