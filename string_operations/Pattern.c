#include <stdio.h>

void printPattern(int n)
{
    // Print the top half of the pattern
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print '#' for the current row
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        // Print a newline character
        printf("\n");
    }

    // Print the bottom half of the pattern
    for (int i = n - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print '#' for the current row
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        // Print a newline character
        printf("\n");
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    printPattern(N);
    return 0;
}
