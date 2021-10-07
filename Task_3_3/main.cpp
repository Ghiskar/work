// Swap the digits of the most significant and least significant digits
// of natural number (3879 -> 9873)

#include <stdio.h>

int main(){
    static const int decimal = 10;

    int x;

    do {
        printf("Enter the natural number : ");
        scanf("%d", &x);

        if (x <= 0){
            printf("wrong x\n");
        } else {
            unsigned int first  = x % decimal;
            unsigned int last   = x;
            unsigned int count  = 1;

            while (last / decimal != 0){
                count *= decimal;
                last /= decimal;
            }

        //    x = x - last*count - first + first*count + last;
        //    x = x + count*(first - last) + last - first;
            x += (first - last)*(count - 1);

            printf("Result = %d\n", x);
        }
    } while (x <= 0);

    return 0;
}
