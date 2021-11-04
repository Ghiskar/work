#include "work.h"

void fill_array(int *array, size_t size){
    srand(time(nullptr));

    for (size_t i = 0; i < size; ++i){
        for (size_t j = 0; j < size; ++j){
            array[i*size + j] = rand() % 10;
        }
    }
}

int sum(int *array, size_t size){
    int sum = 0;

    for (size_t i = 0; i < size-1; ++i){
        for (size_t j = 0; j < size-1-i; ++j){
            sum += array[i*size + j];
        }
    }
    return sum;
}
