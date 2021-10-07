// Найти НОД 3х чисел

#include <stdio.h>

int main(){
    unsigned int a;
    unsigned int b;
    unsigned int c;

    do {
        printf("Enter the first natural number : ");
        scanf("%d", &a);

        if (a <= 0){
            printf("wrong first number\n");
        }
    } while (a <= 0);

    do {
        printf("Enter the second natural number : ");
        scanf("%d", &b);

        if (b <= 0){
            printf("wrong second number\n");
        }
    } while (b <= 0);

    do {
        printf("Enter the third natural number : ");
        scanf("%d", &c);

        if (c <= 0){
            printf("wrong third number\n");
        }
    } while (c <= 0);

    int d       = (b > c) ? ((a > c) ? c : a)
                          : ((a > b) ? b : a);
    int divider = d;

    while ((a % divider != 0) || (b % divider != 0) || (c % divider != 0)){
        static int tmp  = 1;
        static int half = d/2;

        tmp++;

        if (tmp == half){
            divider = 1;
            break;
        }
        if (d % tmp != 0){ continue; }

        divider = d/tmp;
    }
    printf("The maximum common divider of %d, %d and %d is %d\n",
           a, b, c, divider);

    return 0;
}
