#include "work.h"

void fill_array(int * const array, const size_t size){
    srand(time(nullptr));

    for (size_t i = 0; i < size; ++i){
        array[i] = rand() % 200 - 100;
    }
}

int find_max(const int * const array, const size_t size){
    size_t indexMax = 0;

    for (size_t i = 1; i < size; ++i){
        if (array[i] >= array[indexMax]){
            indexMax = i;
        }
    }
    return indexMax;
}

size_t find_last_negative(const int * const array, const size_t size){
    for (size_t i = size-1; i >= 0; --i){
        if (array[i] < 0){
            return i;
        }
    }
    return size;
}

void swap(int *const array, const size_t size){
    size_t indexMax             = find_max(array, size);
    size_t indexLastNegative    = find_last_negative(array, size);

    if (indexLastNegative != size && indexLastNegative != indexMax){
        int tmp                     = array[indexMax];
        array[indexMax]             = array[indexLastNegative];
        array[indexLastNegative]    = tmp;
    }
}
