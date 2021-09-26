#include <stdio.h>

int main()
{
    // WRITE TEXT
    // declaration of a, b, c, x, y, z
    // assignment to b and y values 5 and -0.5
    int a;
    int b(5);
    int c;
    double x;
    double y(-.5);
    double z;

    // ask to enter a from command line
    printf("a=");
    // get from command line
    // I will enter 7 -> a = 7
    scanf("%d",&a);

    // set c=a -> x=c
    // x = c = 7
    x = c = a;
    // write in command line
    // \n - next string
    printf("a = %d, c = %d, x = %f\n",a,c,x);

    // a = a + b
    // a = 7 + 5 = 12
    a += b;
    printf("a = %d\n",a);

    // x = x + (b + a)
    // x = 7 + (5 + 12) = 24.0
    x += b+a;
    printf("x = %f\n",x);

    // a-- postdecrement
    // b = b + a and after equation a = a-1
    // b = 5 + 12 = 17
    // a = 11
    b += a--;
    printf("b = %d\n",b);

    // x = x - (c+1)
    // ++c preincrement
    // x = 24.0 - (7+1) = 16.0
    // c = 8
    x -= ++c;
    printf("x = %f\n",x);

    // result int from a/b
    // c = 11/17 = 0
    c = a/b;
    // format of c is 4 numbers -> '   0'
    printf("c = %4d\n",c);

    // % remainder of the division
    // c = 11%17 = 11
    c = a%b;
    printf("c = %d\n",c);

    x = 5.3;
    // --x predecrement, x++ postincrement
    // y = y + ((x-1)-1)/x, x = x + 1
    // --x -> x = 4.3
    // (4.3-1)/4.3 = 0.76744
    // y = y + 0.76744 = -0.5 + 0.76744 = 0.26744
    // x++ = 5.3
    --x;
    y += ((x-1)/x);
    x++;
    // 0.f - format of float number with 0 numbers after .
    // x = %0.f : x = 5.3 -> print (round to int) x = 5
    // y = 0.27 : y-1 = -0.73 -> print(round to int) y=-1
    // \t - tab
    printf("x = %f\ty=%.2f\n\n x=%.0f\ty=%.0f\n", x-1, y, x, y-1);

    // z = int part from a/2
    // z = 11/2 = 5.0
    z = a/2;
    printf("z = %f\n",z);

    // cast int to float
    // (float)a/2 will be float
    // (float)a/2 = 11.0/2 = 5.5
    z = (float)a/2;
    printf("z = %f\n",z);

    // y = 5.3/2 = 2.65
    y = x/2;
    printf("y = %f\n",y);

    // cast float to int -> result is int
    // (int)x/2 = 5/2 = int(2.5) = 2.0
    y = (int)x/2;
    printf("y = %f\n",y);

    // 3. is float
    // a = 11, b = 17, c = 11, x = 5.3, y = 2.0
    // a%2 = 11/2 = 1
    // (x+b)/c = (5.3+17)/11 = 2.0(27)
    // (x-y)/(a-1) = (5.3-2.0)/(11-1) = 0.33
    // 1/4*a: 1/4 = 0 because (int)1/(int)4 = 0 -> 0*a = 0
    // ++b/3. = (b+1)/3. = 18/3.0 = 6.0
    // y++ = 2 and after equation y = 3
    // z = 3.0(27)
    ++b;
    z = a%2 - (x+b)/c + (x-y)/(a-1) + 1/4*a - y + b/3.;
    y++;
    printf("a=%d b=%d c=%d x=%f y=%f z=%f\n",a, b, c, x, y, z);

    // TASK
    printf("\n\n\t\t\tTASK\n");
    a = 5;
    c = 5;
    printf("a=%d\tc=%d\n", a, c);

    // ask to enter b
    printf("Enter b\n");
    // write from command line value to b
    scanf("%d",&b);

    a += b-2;
    // print result
    printf("a=%d\tb=%d\n", a, b);

    // or ++c
    c++;
    printf("c=%d\n",c);

    // enter d
    int d(0);
    printf("Enter d\n");
    scanf("%d",&d);

    d += c-a;
    printf("d=%d\tc=%d\ta=%d\n", d, c, a);

    a *= c;
    printf("a=%d\n",a);

    c--;
    printf("c=%d\n",c);

    a /= 10;
    printf("a=%d\n",a);

    c /= 2;
    printf("c=%d\n",c);

    b--;
    printf("b=%d\n",b);

    d *= c+b+a;
    printf("d=%d\n",d);

    // return code 0 - success of executing function main
    return 0;
}
