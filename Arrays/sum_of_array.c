#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n); // take array size
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // get array value
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d ", sum);

    return 0;
}
