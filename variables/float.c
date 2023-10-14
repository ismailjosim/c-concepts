#include <stdio.h>

int main()
{
    float a = 33.1415; // *** 32bits and hold 7 decimal
    // printf("%d", a);

    double b = 3.141592653589793; // *** 64bits and hold 15 decimal.
    //  printf("%lf\n", b);

    long double c = 3.14159265358979323846; // *** vary between different systems.
    printf("%20Lf\n", c);
    return 0;
}
