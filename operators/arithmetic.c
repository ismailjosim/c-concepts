#include <stdio.h>

int main()
{
    int a = 20;
    int b = 7;

    int add = a + b;
    int minus = a - b;
    int multipication = a * b;
    int division = a / b;
    int remaining = a % b;

    printf("%d %d %d %d %d", add, minus, multipication, division, remaining);

    return 0;
}
