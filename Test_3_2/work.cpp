#include "work.h"

bool is_min(unsigned long x, unsigned long y){
    return x <= y;
}

unsigned long int min_element(unsigned long int *array, int size){
    unsigned long int min = array[0];

    if (size > 1){
        for (int i = 1; i < size; ++i){
            if(!is_min(min, array[i])){
                min = array[i];
            }
        }
    }
    return min;
}

bool is_int(unsigned long int *array, int size, unsigned long int divider){
    for (int i = 0; i < size; ++i){
        if (array[i] % divider != 0){
            return false;
        }
    }
    return true;
}

unsigned long int min_divider(unsigned long int *array, int size){
    unsigned long int divider = min_element(array,size);

    if (!is_int(array, size, divider)){
        divider /= 2;

        while (!is_int(array, size, divider)){
            divider--;
        }
    }
    return divider;
}
