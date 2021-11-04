#include "print.h"

unsigned long int read_number(){
    constexpr int size  = 255;
    char* str           = (char*)malloc(sizeof(char)*size);
    bool isNotDigit     = true;
    unsigned long int number;

    while (isNotDigit){
        printf("Enter the natural number : ");
        scanf("%s", str);

        isNotDigit      = false;
        char* current   = str;

        while (*current){
            if (!isdigit(*current)){
                isNotDigit = true;
                break;
            }
            ++current;
        }
        if (!isNotDigit){
            number      = strtoul(str, nullptr, 10);
            isNotDigit  = number > ULONG_MAX;
        }
        if (isNotDigit){ printf("wrong number\n"); }
    }
    free(str);
    return number;
}

void fill_array(unsigned long int *array, int size){
    for (int i = 0; i < size; ++i){
        array[i] = read_number();
    }
}

void print_result(unsigned long int divider){
    printf("The least divider is %lu\n", divider);
}

