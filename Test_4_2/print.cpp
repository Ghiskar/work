#include "print.h"

void print_array(const char name, const size_t * const array, const size_t size){
    constexpr size_t border = 5;

    for (size_t i = 0; i < size; ++i){
        if (i && !(i % border)){ printf("\n"); }

        printf("%c[%2llu] = %3llu  ", name, i, array[i]);
    }
    printf("\n\n");
}

void print_elements(size_t ** array, size_t count){
    printf("B array doesn't contain %llu elements in array A : \n",
           count);

    for (size_t i = 0; i < count; ++i){
        printf("value = %llu, address = %p\n", *array[i], array[i]);
    }
}
