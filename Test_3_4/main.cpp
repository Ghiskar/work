// Convert a number from decimal to binary

#include "print.h"
#include "work.h"

int main(){
    double number   = read_number();

    char* result    = (char*)malloc(sizeof(char)*length);
    result          = to_binary(number);
    print(result);

    free(result);

    return 0;
}
