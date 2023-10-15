#include <stdio.h>

int main()
{
    int arr[5];
    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    arr[3] = 400;
    arr[4] = 500;

    // printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
