#include <stdio.h>

int main()
{
    // ! In C programming, there is no built-in boolean data type 1 and 0 is true and false
    int isTrue = 1;  // Represents true
    int isFalse = 0; // Represents false.

    if (isTrue)
    {
        printf("This code block executes because isTrue is true.\n");
    }

    if (!isFalse)
    {
        printf("This code block executes because isFalse is false (negated).\n");
    }
    return 0;
}
