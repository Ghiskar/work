#include "work.h"

unsigned long swap_digits(unsigned long number){
    constexpr int decimal   = 10;

    unsigned long int first = number % decimal;
    unsigned long int last  = number;
    unsigned long int count = 1;

    while (last / decimal != 0){
        count *= decimal;
        last /= decimal;
    }
//  number = number - last*count - first + first*count + last;
//  number = number + count*(first - last) + last - first;
    number += (first - last)*(count - 1);

    return number;
}
