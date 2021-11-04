#include "work.h"
#include <stdio.h>


char *to_binary(double number){
    char* result    = (char*)malloc(sizeof(char)*length);
    *result         = '\0';

    if (fabs(number) > 1){
        int_part(result, (long int)number);
    } else {
        strcat(result, (char*)"0");
    }
    number = fabs(number);
    number -= (long int)number;

    if (number > 0){
        float_part(result, number);
    }
    return result;
}

void int_part(char *result, long int number){
    static size_t count = 0;

    if (number && count < int_length){
        ++count;
        int_part(result, number >> 1);
        strcat(result, (number & 1 ? "1" : "0"));
    }
    count = 0;
}

void float_part(char *result, double number){
    strcat(result, ".");

    for (int i = 0; i < float_length; ++i){
        number *= binary;
        strcat(result, (number >= 1 ? "1" : "0"));
        number -= (int)number;
    }
}
