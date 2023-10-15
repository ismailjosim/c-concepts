#include <stdio.h>

int main()
{
    // loop type 1: initialize i outside the loop
    int i;
    for (i = 0; i <= 15; i++)
    {
        printf("This is From For Loop!\n");
    }
    // loop type 2: initialize i inside the loop
    int sum = 0;
    for (int i = 0; i <= 20; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}
