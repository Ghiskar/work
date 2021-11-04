#include "print.h"

void print_array(const int * const array, const size_t size){
    for (size_t i = 0; i < size; ++i){
        printf("M[%llu] = %d\n", i, array[i]);
    }
    printf("\n");
}
