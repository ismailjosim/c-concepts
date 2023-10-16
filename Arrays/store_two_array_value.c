#include <stdio.h>

int main()
{
    // take two input value

    //===> Array One
    int n;
    scanf("%d", &n); // get length of the array
    int a[n];        // declare an array that length will be n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // store each array value for array 1
    }

    //===> Array Two
    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]); // store each array value for array 2
    }

    // step-02: create a temp array which length will be array 01 + 02;
    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }

    // step 03: copy 2nd value
    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    // step 04: print the value
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}
