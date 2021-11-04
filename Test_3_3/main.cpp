// Swap the digits of the most significant and least significant digits
// of natural number (3879 -> 9873)

#include <stdlib.h>
#include "print.h"
#include "work.h"

int main(){
    unsigned long int *number   = (unsigned long int*)malloc(sizeof (unsigned long int));
    *number                     = read_number();
    print_result(swap_digits(*number));
    free(number);

    return 0;
}
