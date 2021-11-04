#include "work.h"

bool bracket_expression(char *str){
    constexpr char openBracket  = '{';
    constexpr char closeBracket = '}';
    int count                   = 0;

    for (char *current = str; *current; ++current){
        if (*current == openBracket){
            ++count;
        } else if (*current == closeBracket){
            --count;
            if (count < 0){ return false; }
        }
    }
    return !count;
}
