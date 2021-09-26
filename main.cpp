#include <stdio.h>
#include <math.h>

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

    return 0;
}
