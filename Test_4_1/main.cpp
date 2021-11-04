//  Поменять местами максимальный и последний отрицательный элементы массива M(40).

#include "print.h"
#include "work.h"

int main(){
    constexpr size_t size   = 40;
    int *M                  = (int*)malloc(sizeof(int)*size);

    fill_array(M, size);
    print_array(M, size);
    swap(M, size);
    print_array(M, size);

    free(M);

    return 0;
}
