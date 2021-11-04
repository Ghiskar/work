//  Дана матрица размером 7х7.
//  Поменять местами k-й столбец с k-ой строкой.

#include "print.h"
#include "work.h"

int main(){
    constexpr size_t size   = 7;
    int M[size][size]       = {};
    size_t k                = read_index(size);

    fill_array(*M, size, k);
    print_array(*M, size);
    swap_row_column(*M, size, k);
    print_array(*M, size);

    return 0;
}
