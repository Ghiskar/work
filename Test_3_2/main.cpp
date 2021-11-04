// Найти НОД 3х чисел

#include "print.h"
#include "work.h"
#include <stdlib.h>

int main(){
    constexpr int size = 3;
    unsigned long int *array = (unsigned long int*)malloc(size*sizeof(unsigned long int));

    if (array){
        fill_array(array, size);
        print_result(min_divider(array, size));
    }
    free(array);
    return 0;
}
