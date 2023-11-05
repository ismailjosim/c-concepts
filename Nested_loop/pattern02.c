#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;

    for (int i = 1; i <= n; i++)
    {
        // 1. line
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        // line end
        s--;
        k = k + 2;
        printf("\n");
    }

    return 0;
}

/*
if the n = 3;
it will print:
1 start:
3 start
5 start


*/
