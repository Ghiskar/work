// Convert a number from decimal to binary

#include <limits.h>
#include <math.h>
#include <stdio.h>

int main(){
    static const int decimal    = 10;
    static const int binary     = 2;

    double x;
    printf("Enter the number : ");
    scanf("%lf", &x);

    bool isNegative = x < 0;
    bool addOne     = isNegative;

    if (isNegative){ x *= -1; }

    double  res = 0;
    bool    work = (int)x != 0;

    while(work){
        static long long int    tmp = (int)x;
        static int              count = 0;
        static int              digit;

        digit = tmp % binary;

        if (isNegative){
            digit = (digit == 1) ? 0 : 1;

            if (addOne){
                if (digit == 0){
                    digit = 1;
                    addOne = false;
                } else {
                    digit = 0;
                }
            }
        }
        res += digit * pow(decimal, count);
        count++;

        tmp /= binary;

        work = isNegative ? (count % CHAR_BIT != 0 || addOne)
                          : (tmp != 0);
    }
    printf("%llu", (unsigned long long int)res);

    // fractional part
    x -= (int)x;

    if (x != 0){
        printf(".");

        for (int i = 0; i < CHAR_BIT; ++i){
            x *= binary;

            printf("%d", (x >= 1) ? 1 : 0);

            if (x == 1){ break; }

            x -= (int)x;
        }
    }
    printf("\n");
    return 0;
}
