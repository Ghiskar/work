//  Вычислить сумму элементов матрицы, лежащих
//  сслева от побочной диагонали.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    constexpr size_t size = 8;
    int M[size][size];

    srand(time(nullptr));

    for (size_t i = 0; i < size; ++i){
        for (size_t j = 0; j < size; ++j){
            M[i][j] = rand() % 10;
            printf("%d  ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // find sum
    int sum = 0;

    // right
//    for (size_t i = size-1; i > 0; --i){
//        for (size_t j = size-1; j > size-1-i; --j){
    // left
    for (size_t i = 0; i < size-1; ++i){
        for (size_t j = 0; j < size-1-i; ++j){
            sum += M[i][j];
            printf("i = %ld, j = %ld\n", i, j);
        }
    }
    printf("Sum is %d\n", sum);
    return 0;
}
