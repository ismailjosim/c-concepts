#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = 0;
    k = (2 * n) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
