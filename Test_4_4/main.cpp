//  Вычислить сумму элементов матрицы, лежащих
//  сслева от побочной диагонали.

#include "print.h"
#include "work.h"

int main(){
    constexpr size_t size   = 8;
    int *M                  = (int*)malloc(sizeof(int)*size*size);

    fill_array(M, size);
    print_array(M, size);
    print_sum(sum(M, size));
    free(M);

    return 0;
}
