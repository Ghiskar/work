#include "work.h"

void fill_array(int *array, size_t size, size_t k){
    srand(time(nullptr));

    for (size_t i = 0; i < size; ++i){
        for (size_t j = 0; j < size; ++j){
            if (i == k)         { array[i*size + j] = k+1; }
            else if (j == k)    { array[i*size + j] = k + 2; }
            else                { array[i*size + j] = rand() % 10; }
        }
    }
}

void swap_row_column(int *array, size_t size, size_t k){
    size_t tmp;

    for (size_t i = 0; i < size; ++i){
        tmp                 = array[i*size + k];
        array[i*size + k]   = array[k*size + i];
        array[k*size + i]   = tmp;
    }
}
