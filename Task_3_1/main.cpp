//Дано натуральное число N.
//Составить программу для определения количества цифр в этом числе.

#include <stdio.h>

int main(){
    static const int decimal = 10;
    long long int N;

    do {
        printf("Enter the natural number : ");
        scanf("%lli", &N);

        if (N <= 0){
            printf("wrong number");
        }
    } while (N <= 0);

    int count = 0;

    do {
        N /= decimal;
        count++;
    } while (N != 0);

    printf("Count is %d\n", count);

    return 0;
}
