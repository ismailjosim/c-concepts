#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // 1: this is the work
        for (int j = 1; j <= k; j++)
        {
            printf("I");
        }
        // 2: it will increase the value of k.
        k++;
        printf("\n");
    }

    return 0;
}
