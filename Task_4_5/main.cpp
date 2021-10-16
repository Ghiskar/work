//  Дана строка символов. Удалить из нее все слова нечетной длины.
//  Слова отделяются друг от друга одним пробелом.

#include <stdio.h>
#include <string.h>

int main(){
    constexpr size_t size = 255;
    const char delimiter = ','; // FIXME -> ' '
    char str[size];
    char res[size] = {};

//    gets(str); // FIXME doesn't work
    scanf("%s", str);

    size_t count = 0;
    size_t index = 0;

    for (char *current = str; *current; ++current){
        if (*current == delimiter){
            if (!(count % 2)){
                if (strlen(res)){
                    strncat(res, &delimiter, 1);
                }
                strncat(res, &str[index-count], count);
            }
            count = -1;
        }
        count ++;
        index++;
    }
    if (!(count % 2)){
        if (strlen(res)){ strncat(res, &delimiter, 1); }

        for (size_t i = index - count; i < index; ++i){
            strncat(res, &str[i], 1);
        }
    }
    printf("\n%s\n", res);

    return 0;
}
