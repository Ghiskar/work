// Определить местоположение элементов массива А (30),
// не встречающихся в массиве В (15).

#include "print.h"
#include "work.h"

int main(){
    srand(time(nullptr));

    constexpr size_t sizeA  = 30;
    size_t A[sizeA];
    fill_array(A, sizeA);
    print_array('A', A, sizeA);

    constexpr size_t sizeB  = 15;
    size_t B[sizeB];
    fill_array(B, sizeB);
    print_array('B', B, sizeB);

    size_t **array  = (size_t**)malloc(sizeof(size_t)*(sizeA + 1));
    print_elements(array, unique_elements(array, A, sizeA, B, sizeB));

    free(array);

    return 0;
}
