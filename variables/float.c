#include <stdio.h>

int main()
{
    float a = 33.1415; // *** 32bits and hold 7 decimal
    // printf("%f", a);

    double b = 3.141592653589793; // *** 64bits and hold 15 decimal.
    //  printf("%lf\n", b);

    long double c = 3.14159265358979323846; // *** vary between different systems.
    // printf("%20Lf\n", c);

    float value = 2.3434;
    printf("%0.5f", value); // here we can specify how many decimal we want to print.

    return 0;
}
