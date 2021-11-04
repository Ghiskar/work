#include "print.h"

void read_string(char *str, size_t size){
    printf("Enter the string : ");
    fgets(str, size, stdin);
}

void print_result(bool isRight){
    printf("Is %s bracket expression\n",
           isRight ? "right" : "wrong");
}
