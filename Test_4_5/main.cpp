//  Дана строка символов. Удалить из нее все слова нечетной длины.
//  Слова отделяются друг от друга одним пробелом.

#include "print.h"
#include "work.h"

int main(){
    constexpr size_t size   = 255;
    char* str               = (char*)malloc(sizeof(char)*size);
    char* res               = (char*)malloc(sizeof(char)*size);

    read_string(str, size);
    res = even_words(str, size);
    print_string(res);

    free(res);
    free(str);

    return 0;
}
