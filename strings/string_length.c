#include <stdio.h>
#include <string.h>

int main()
{
    char b[] = "Hello World!";
    int length = strlen(b);
    printf("The value of a is %d\n", length);

    char a[100];
    scanf("%s", a);
    int count = 0;
    // * 1. find length using while loop
    int i = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    // * 1. find length using for loop

    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);

    return 0;
}
