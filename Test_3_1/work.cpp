#include "work.h"

unsigned int count_digits(unsigned long number){
    constexpr int decimal   = 10;
    int count               = 0;

    do {
       number /= decimal;
       count++;
    } while (number != 0);

    return count;
}
