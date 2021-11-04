// Вычислить сумму ряда с точностью 10^-5, где 0.05<x<1
// f(x) = x + x^3/(2*3) + 1*3*5*x^5/(2*4*5) + .. +
// (2n-1)!!x^(2n+1) / ((2n)!!(2n+1))

#include "print.h"
#include "work.h"

constexpr double eps = 0.00001;

int main(){
    double *x   = (double*)malloc(sizeof(double));
    double *s   = (double*)malloc(sizeof(double));
    *x          = read_x();
    *s          = sum(*x, eps);
    print_sum(*s);

    free(x);
    free(s);
    return 0;
}
