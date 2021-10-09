//    Поменять местами максимальный и последний отрицательный элементы массива M(40).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    constexpr size_t size       = 40;
    size_t indexMax             = 0;
    size_t indexLastNegative    = 0;

    int M[size];

    srand(time(nullptr));

    for (size_t i = 0; i < size; ++i){
        M[i] = rand() % 200 - 100;

        if (M[i] > M[indexMax]){
            indexMax = i;
        }
        if (M[i] < 0){
            indexLastNegative = i;
        }
        printf("M[%ld] = %d\n", i, M[i]);
    }
    printf("\n");

    printf("Maximum is M[%ld] = %d, last negative is M[%ld] = %d\n\n",
           indexMax, M[indexMax], indexLastNegative, M[indexLastNegative]);

    int tmp                 = M[indexMax];
    M[indexMax]             = M[indexLastNegative];
    M[indexLastNegative]    = tmp;

    for (size_t i = 0; i < size; ++i){
        printf("M[%ld] = %d\n", i, M[i]);
    }
    printf("\n");

    return 0;
}
