#include <stdio.h>

int main()
{

    // method 01: count value
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt[8] = {0};

    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        cnt[val]++;
    }

    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }

    // printf("0 - %d\n", cnt[0]);
    // printf("1 - %d\n", cnt[1]);
    // printf("2 - %d\n", cnt[2]);
    // printf("3 - %d\n", cnt[3]);
    // printf("4 - %d\n", cnt[4]);

    return 0;
}
