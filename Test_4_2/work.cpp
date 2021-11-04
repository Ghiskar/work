#include "work.h"
#include <stdio.h>

void fill_array(size_t * const array, const size_t size){
    for (size_t i = 0; i < size; ++i){
        array[i] = rand() % 20;
    }
}

size_t unique_elements(size_t **array, size_t * A, size_t sizeA, size_t * B, size_t sizeB){
    bool equals     = true;
    size_t count    = 0;

    // find indexes of A array elements which contains B array
    for (size_t i = 0; i < sizeA; ++i){
        equals = true;

        for (size_t j = 0; j < sizeB; ++j){
            equals = A[i] == B[j];

            if (equals){ break; }
        }
        if (!equals){
            array[count] = &A[i];
            ++count;
        }
    }
    return count;
}
