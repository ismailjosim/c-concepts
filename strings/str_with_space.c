#include <stdio.h>
#include <string.h> // string related files
int main()
{
    char a[18]; // এখানে আমরা যদি সাইজ কমও দেই সেক্ষেত্রে windows নিজ থেকে মেমরী দিয়ে সেটাকে স্টোর করছে যেটা macOS or linux দিবে না।

    // gets(a);
    fgets(a, 13, stdin); // it take entire input. but it wil show value according to your size.
    a[10] = '\0';        // we can specify a certain point we give manually null (\0). it will then stop print after that specific index value.
    printf("%s", a);
    return 0;
}
