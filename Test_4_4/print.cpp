#include "print.h"

void print_array(int *array, size_t size){
    for (size_t i = 0; i < size; ++i){
        for (size_t j = 0; j < size; ++j){
            printf("%d  ", array[i*size + j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void print_sum(int sum){
    printf("Sum is %d\n", sum);
}
