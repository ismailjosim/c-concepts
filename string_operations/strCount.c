#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 'a';
        cnt[val]++;
    }
    char st[100];
    for (int i = 0; i < 26; i++)
    {
        // printf("%c - %d\n", i + 'a', cnt[i]);
        // if (cnt[i] != 0)
        // {
        //     printf("%c - %d\n", i + 'a', cnt[i]);
        // }

        // remove duplicate value
        int val = s[i] - 97;
        if (cnt[val] != 0)
        {
            int unique = cnt[val] + 'a';
            pr
        }
        cnt[val] = 0;
    }

    return 0;
}
