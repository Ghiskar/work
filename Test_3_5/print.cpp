#include "print.h"

double read_x(){
    constexpr int size  = 255;
    char* str           = (char*)malloc(sizeof(char)*size);
    bool isNotDigit     = true;
    int count           = 0;
    double number;

    while (isNotDigit){
        printf("Enter x (0.05 < x < 1): ");
        scanf("%s", str);

        isNotDigit      = false;
        char* current   = str;

        while (*current){
            count += (*current == '.');

            if ((!isdigit(*current) && *current != '.') || count > 1){
                isNotDigit = true;
                break;
            }
            ++current;
        }
        if (!isNotDigit){
            number      = strtod(str, nullptr);
            isNotDigit  = number < 0.05 || number > 1;
        }
        if (isNotDigit){ printf("wrong number\n"); count = 0; }
    }
    free(str);
    return number;
}

void print_sum(double sum){
    printf("Sum is %.18f\n", sum);
}
