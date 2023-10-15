#include <stdio.h>

int main()
{
    int a, b;
    char p;
    // *** method-01: we take % percentage input via char
    // scanf("%d%c %d%c", &a, &p, &b, &p);

    // *** method-02: it simply take % percentage input but won't store it anywhere.
    scanf("%d%% %d%%", &a, &b);

    printf("%d%% %d%%", a, b);
    return 0;
}
