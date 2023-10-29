#include <stdio.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("B is Greater The A!");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("A is Greater The B!");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is Smaller");
            break;
        }
        else
        {
            printf("B is Smaller");
            break;
        }
    }

    return 0;
}

/*
? what is String Lexicographical Comparison
* Lexicographical Comparison compare two value word-by-word.

? suppose i have two string value 1. apple 2. apply

here it will compare like this:

v1(a[0]) === v2(a[0]) = true

?  apple & apply

*  a = a  => next
*  p = p  => next
*  p = p  => next
*  l = l  => next
*  e != y => here we compare which one is higher in alphabetical order.

* for example: y comes after e that's why here apple < apply.

? appl & application

* here we compare the word if one of them finished counting then the others will be big

* a = a => next
* p = p => next
* p = p => next
* l = l => next
*  = i => here there is not word left in the 1st string. that's why 2nd one is big.

* ANSWER:(smaller) appl < application (bigger)




*/
