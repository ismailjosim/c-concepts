#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 0)
        {
            continue;
        }

        if (i == 6)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
