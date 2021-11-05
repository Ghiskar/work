#include "print.h"

void print_array(const bool * const array, const int x, const int y){
    for (int i = 0; i < x; ++i){
        for (int j = 0; j < y; ++j){
            printf("%d  ", array[i*y + j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void print_result(const int count){
    printf("count = %d\n", count);
}

void set_point(Pair &point, char* s){
    printf("Enter row of %s point : ", s);
    scanf("%d", &point.i);
    printf("Enter column of %s point : ", s);
    scanf("%d", &point.j);
}

void set_size(int &x, int &y){
    printf("Set size of array : rows ");
    scanf("%d", &x);
    printf("columns ");
    scanf("%d", &y);
}
