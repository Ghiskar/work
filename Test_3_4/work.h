#ifndef WORK_H
#define WORK_H

//#include <limits.h>
#include <math.h>
#include <string.h>

constexpr int binary        = 2;
constexpr int int_length    = sizeof(long int)*CHAR_BIT;
constexpr int float_length  = CHAR_BIT;
constexpr int length        = int_length + float_length + 1;

char*   to_binary(double number);
void    int_part(char *result, long number);
void    float_part(char *result, double number);

#endif // WORK_H
