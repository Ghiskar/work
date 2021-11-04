#include "print.h"

void read_string(char* str, size_t size){
    printf("Enter the string : ");
    fgets(str, size, stdin);
}

void print_string(char *str){
    printf("_%s_\n", str);
}
