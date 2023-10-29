#include <stdio.h>
#include <string.h>

int main()
{
    // char a[100];
    // scanf("%s", a);
    // int count = 0;
    // // * 1. find length using while loop
    // int i = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // // * 1. find length using for loop

    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d\n", count);

    // string method
    char b[100];
    scanf("%s", b);
    int st = strlen(b);
    printf("The value of b is %d\n", st);

    return 0;
}
