#include <stdio.h>
#include <string.h>

int main()
{
    // *** 1. String Copy

    char a[100], b[100];

    scanf("%s%s", a, b);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
        // ? here is the broad explanation
        /*
         * a[0] = b[0] ==> o
         * a[1] = b[1] ==> r
         * a[2] = b[2] ==> a
         * a[3] = b[3] ==> n
         * a[4] = b[4] ==> g
         * a[5] = b[5] ==> e
         * a[6] = b[6] ==> \0 (null value and end the string)
         */
    }
    printf("%s %s", a, b);

    // *** 2. string method (shortcut way)
    strcpy(a, b);
    printf("%s %s", a, b);

    return 0;
}
