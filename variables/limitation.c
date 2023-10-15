#include <stdio.h>

int main()
{
    // *** limitation of int
    // int can print 10^9 digit
    int a = 1000000000;
    // printf("%d", b);

    // to store more then 10^9 we have to use long long int. it can hold (+-)10^18 digit number.
    // long long int b = 1000000000000000000;
    // printf("%lld", b);

    // *** limitation of float
    float n = 2006.24; // hold total 6-7 digit
    // printf("%f", n);

    double x = 200055.123456789123456; // hold total 15 digit

    printf("%0.15lf", x);

    return 0;
}
