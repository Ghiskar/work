#include "print.h"

double read_number(){
    constexpr int size  = 255;
    char* str           = (char*)malloc(sizeof(char)*size);
    bool isNotDigit     = true;
    int count           = 0;
    double number;

    while (isNotDigit){
        printf("Enter the number : ");
        scanf("%s", str);

        isNotDigit      = false;
        char* current   = str;

        // if negative
        if (*current == '-'){ ++current; }

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
            isNotDigit  = number == strtod("NaN", nullptr) ||
                            number == strtod("Inf", nullptr) ||
                            number < LONG_MIN || number > LONG_MAX;
        }
        if (isNotDigit){ printf("wrong number\n"); count = 0; }
    }
    free(str);
    return number;
}

void print(char *result){
    printf("The result is %s\n", result);
}
