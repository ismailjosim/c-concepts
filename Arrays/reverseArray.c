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
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]); // reverse an array.
    }

    return 0;
}
