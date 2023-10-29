#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);

    // * method: 01 (manual method)
    // int k = strlen(a);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[k] = b[i];
    //     k++;
    // }
    // printf("%s", a);

    // * built-in method: strcat()
    int x = strcat(a, b);
    printf("%s", x);

    return 0;
}

/*
int a[] = "Hello"
int b[] = "world!"

1st add full a value then after that add after the rest value of b with a
*==> H e l l o
*==> 0 1 2 3 4

*==> a[5] = b[0]
*==> a[6] = b[1]
*==> a[7] = b[2]
*==> a[8] = b[3]
*==> a[9] = b[4]
*==> a[10] = b[5]
*==> a[11] = b[6]

*==> loop logic
*==> a[k] = b[i]
int k = 5;
i = 0;
a[k] = b[i]
k++


*/
