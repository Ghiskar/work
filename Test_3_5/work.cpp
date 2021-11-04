#include "work.h"

double sum(double x, double eps){
    double  sum = 0;
    double  f_1 = 1;
    double  f_2 = 1;
    double  tmp;
    int     n = 0;
    int     t = 2*n + 1;
    int     k = 1;

    while (true){
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
    return sum;
}
