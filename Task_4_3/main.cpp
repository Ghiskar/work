//  Дана матрица размером 7х7.
//  Поменять местами k-й столбец с k-ой строкой.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    constexpr size_t size = 7;
    size_t M[size][size];

    srand(time(nullptr));

    printf("Enter k : ");
    size_t k;
    scanf("%ld", &k);
    --k;

    printf("\n");

    // for ease : set elements in k row = k
    // and elements in k column = k + 1
    for (size_t i = 0; i < size; ++i){
        bool isKRow = i == k;

        for (size_t j = 0; j < size; ++j){
            if (isKRow){
                M[i][j] = k+1;
            } else if (j == k){
                M[i][j] = k + 2;
            } else {
                M[i][j] = rand() % 10;
            }
            printf("%ld  ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // change k row with k column
    size_t tmp;

    for (size_t i = 0; i < size; ++i){
        tmp     = M[i][k];
        M[i][k] = M[k][i];
        M[k][i] = tmp;
    }
    // print the result
    for (size_t i = 0; i < size; ++i){
        for (size_t j = 0; j < size; ++j){
            printf("%ld  ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
