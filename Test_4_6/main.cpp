//  Дана строка символов. Определить,
//  является ли она правильным скобочным выражением.

#include "print.h"
#include "work.h"

int main(){
    constexpr size_t size   = 255;
    char str[size];

    read_string(str, size);
    print_result(bracket_expression(str));

    return 0;
}
