#include <stdio.h>
#include <math.h>

int main(){
    // declaration
    double y;
    double x;

    // read value of x
    printf("Enter x\n");
    scanf("%lf",&x);

    // computation
    // numerator
    double num      = 2*cos(x - M_PI/4) + sqrt(2);
    num             *= exp(3*x);

    // denominator
    // log is natural logarithm
    // log10 is logarithm with foundation 10
    double denom    = 1/(2*log(x));
    denom           += pow( (sin( pow(x,2)) ), 2);

    // result
    y               = num/denom;

    // print result
    printf("Result is %f\n", y);

    return 0;
}
