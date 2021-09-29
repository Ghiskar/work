#include <stdio.h>
#include <math.h>

const double COEFFICIENT = 4/pow(3,2);

int main(){
    // declaration
    int     R;
    int     a;
    int     d;
    double  circleArea;
    double  triangleArea;
    double  squareArea;

    // circle
    printf("Enter R\n");
    scanf("%d", &R);

    circleArea      = M_PI * pow(R,2);
    printf("circle area = %lf\n", circleArea);

    // triangle
    printf("Enter a\n");
    scanf("%d", &a);

    triangleArea    = pow(a,2) * sqrt(3) / 4;
    printf("triangle area = %lf\n", triangleArea);

    // square
    printf("Enter d\n");
    scanf("%d", &d);

    squareArea      = pow(d,2);
    printf("square area = %lf\n", squareArea);

    // define, which area is bigger
    if (circleArea > triangleArea){
        (circleArea > squareArea)   ? printf("circle area is the biggest\n")
                                    : printf("square area is the biggest\n");
    } else {
        (triangleArea > squareArea) ? printf("triangle area is the biggest\n")
                                    : printf("square area is the biggest\n");
    }

    // circleArea / triangleArea = 4/(3^(1/2)) * pi * (R/a)^2 = coef * pi * (R/a)^2
    // circleArea / squareArea = pi * (R/d)^2
    // squareArea / triangleArea = 4/(3^(1/2)) * (d/a)^2 = coef * (d/a)^2

    double circleToTriangle = COEFFICIENT *M_PI * pow((R/a), 2);
    double circleToSquare   = M_PI * pow((R/d), 2);
    double squareToTriangle = COEFFICIENT * pow((d/a), 2);

    printf("circleToTriangle = %lf\n",  circleToTriangle);
    printf("circleToSquare = %lf\n",    circleToSquare);
    printf("squareToTriangle = %lf\n",  squareToTriangle);

    if (circleToTriangle > 1){
        (circleToSquare > 1)    ? printf("circle area is the biggest\n")
                                : printf("square area is the biggest\n");
    } else {
        (squareToTriangle > 1)  ? printf("square area is the biggest\n")
                                : printf("triangle area is the biggest\n");
    }

    return 0;
}
