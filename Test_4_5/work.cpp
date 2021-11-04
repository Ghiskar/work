#include "work.h"

constexpr char delimiter    = ' ';
constexpr char end          = '\n';

char *even_words(char *str, size_t size){
    char* res       = (char*)malloc(sizeof(char)*size);
    *res            = '\0';
    size_t count    = 0;
    size_t index    = 0;

    for (char* current = str; *current; ++current){
        if (*current == delimiter || *current == end){
            writeIfEven(&str[index-count], res, count);
            count = -1;
        }
        count++;
        index++;
    }
    return res;
}

bool writeIfEven(char *str, char *res, int count){
    if (count && !(count % 2)){
        if (strlen(res)){
            strncat(res, &delimiter, 1);
        }
        strncat(res, str, count);
        return true;
    }
    return false;
}
