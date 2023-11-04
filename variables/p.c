#include <stdio.h>
#include <string.h>

int main()
{
    char n[1001];
    fgets(n, 1001, stdin);

    int len = strlen(n);

    int f = 0;

    for (int i = 0, j = len - 2; i < (len - 1) / 2; i++, j--)
    {
        // printf("%d%c %d%c\n", i, n[i], j, n[j]);

        if (n[i] != n[j])
        {
            f = 1;
            break;
        }
    }

    if (f)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}
