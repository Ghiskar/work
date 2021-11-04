//Дано натуральное число N.
//Составить программу для определения количества цифр в этом числе.

#include <stdlib.h>
#include "print.h"
#include "work.h"

int main(){
    unsigned long int *number = (unsigned long int*)malloc(sizeof(unsigned long int));

    *number = read_number();
    print_result(count_digits(*number));

    free(number);

    return 0;
}
