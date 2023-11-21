#include <stdio.h>

int main()
{
    int n, s = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // work
        for (int j = 1; j <= s; j++)
        {
            printf("%d ", j);
        }
        s++;
        printf("\n");
    }

    return 0;
}
/*
 * define work
 *
 */
