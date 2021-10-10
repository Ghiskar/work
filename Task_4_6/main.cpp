//  Дана строка символов. Определить,
//  является ли она правильным скобочным выражением.

#include <stdio.h>
#include <string>

int main(){
    constexpr size_t size   = 255;
    const char openBracket  = '{';
    const char closeBracket = '}';
    char str[size];

    printf("Enter the string : ");
    scanf("%s", str);

    int count = 0;

    for (char *current = str; *current; ++current){
        if (*current == openBracket){
            ++count;
        } else if (*current == closeBracket){
            --count;
            if (count < 0){ break; }
        }
    }
    printf("Is %s bracket expression\n",
           (count) ? "wrong" : "right");
    return 0;
}
