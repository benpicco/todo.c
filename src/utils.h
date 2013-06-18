#ifndef UTILS_H
#define UTILS_H

#include <stdint.h>
#include <stddef.h>

typedef enum {
    black = 30,
    red = 31,
    green = 32,
    yellow = 33,
    blue = 34,
    magenta = 35,
    cyan = 36,
    white = 37,
} colors;

/* wrap string color */
uint8_t *colored(uint8_t *str, size_t size, int color);
/* if a string is a valid integer format */
int is_int_like(const char * s);

#endif