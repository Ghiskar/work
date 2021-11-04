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

size_t read_index(size_t size){
    size_t k;

    do {
        printf("Enter k <= %llu : ", size);
        scanf("%llu", &k);

        if (k < 0 || k > size){
            printf("wrong k\n");
        }
    } while (k < 0 || k > size);

    --k;
    printf("\n");

    return k;
}
