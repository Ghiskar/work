// Вычислить сумму ряда с точностью 10^-5, где 0.05<x<1
// f(x) = x + x^3/(2*3) + 1*3*5*x^5/(2*4*5) + .. +
// (2n-1)!!x^(2n+1) / ((2n)!!(2n+1))

#include <math.h>
#include <stdio.h>

int main(){
    static const double eps = 0.00001;
    double x;

    do {
        printf("Enter x (0.05 < x < 1): ");
        scanf("%lf", &x);

        if (x < 0.05 || x > 1){
            printf("wrong x\n");
        } else {
            double sum = 0;

            while (true){
                static double   f_1 = 1;
                static double   f_2 = 1;
                static double   tmp;
                static int      n = 0;
                static int      t = 2*n + 1;
                static int      k = 1;

                for (int i = k; i < t; ++i){
                    (i % 2 != 0) ? (f_1 *= i) : (f_2 *= i);
                }
                tmp = f_1/f_2 * pow(x, t)/t;

                if (tmp <= eps){ break; }

                sum += tmp;
                k = t;
                n++;
                t = 2*n + 1;
            }
            printf("Sum is %.18f\n", sum);
        }
    } while (x < 0.05 || x > 1);

    return 0;
}
