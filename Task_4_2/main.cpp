// Определить местоположение элементов массива А (30),
// не встречающихся в массиве В (15).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    constexpr size_t sizeA = 30;
    int A[sizeA];

    constexpr size_t sizeB = 15;
    int B[sizeB];

    srand(time(nullptr));

    constexpr size_t border = 5;

    // define elements of array A
    for (size_t i = 0; i < sizeA; ++i){
//        A[i] = rand() % 200 - 100;
        A[i] = rand() % 20 -10;
//        A[i] = rand() % 10;

        if (i && !(i % border)){ printf("\n"); }

        printf("A[%3ld] = %2d%s  ", i, A[i], (i == sizeA-1) ? "" : ",");
    }
    printf("\n\n");

    // define elements of array B
    for (size_t i = 0; i < sizeB; ++i){
//        B[i] = rand() % 200 - 100;
        B[i] = rand() % 20 -10;
//        B[i] = rand() % 10;

        if (i && !(i % border)){ printf("\n"); }

        printf("B[%3ld] = %3d%s  ", i, B[i], (i == sizeB-1) ? "" : ",");
    }
    printf("\n\n");

    printf("B array doesn't contain elements in array A : \n");

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
            if (count){ printf(", "); }

            if (count && !(count % border)){ printf("\n"); }

            printf("A[%3ld] = %3d", i, A[i]);
            ++count;
        }
    }
    printf("\n\nCount = %ld\n", count);

    return 0;
}
