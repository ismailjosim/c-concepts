#include <stdio.h>

int main()
{
    int x = 12345;    // ***(32bits) int hold values in the range of approximately -2 billion to +2 billion.
    short y = -12345; // ***(16bit)  smaller range compared to int. hold value -32,768 to +32,767 (5 digit) +-
    // ? All support same print data type method
    // printf("%d", y);

    long z = 1234567890; // ***(32 or 64 bits) hold -9 quintillion to +9 quintillion (10 digits)
    // printf("%ld\n", z);

    long long big = 1234567890; // *** (64bits) and hold very large integers.
    printf("%11d\n", big);

    return 0;
}
