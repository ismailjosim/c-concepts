#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    // * method: 01: using while loop
    /*
      // int i = 0;
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
     */
    // * method: 02: using for loop
    /*
    for (int i = 0; a[i] != '\0' || b[i] != '\0'; i++)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("B is Greater Than A!\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("A is Greater Than B!\n");
            break;
        }

        if (a[i] == b[i])
        {
            // Characters are the same; continue to the next character.
        }
        else if (a[i] < b[i])
        {
            printf("A is Smaller\n");
            break;
        }
        else
        {
            printf("B is Smaller\n");
            break;
        }
    }
*/
    // * method: 02: using built in function (strcmp)
    int v = strcmp(a, b);
    if (v < 0)
    {
        printf("B is Bigger\n");
    }
    else if (v > 0)
    {
        printf("A is Bigger\n");
    }
    else
    {
        printf("Same\n");
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
