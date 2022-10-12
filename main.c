#include <stdio.h>

/* A program to count white spaces , digits and others */

int main()
{
    int c , i , nwhite , nother;

    int ndigits[10];

    nwhite = nother = 0;

    for (i = 0; i < 10; ++i)
    {
        ndigits[i] = 0; /* [0, 0, 0, 0, 0, 0, 0, 0, 0, 0] */
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ndigits[c - '0'] += 1;  /* '0' = 30 , c = 5 -> 35 - 30 -> 5 */
        }

        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        }
        else
            ++nother;
    }
    printf("Number of Digits =");
    for (i = 0; i < 10; ++i)
    {
        printf(" %d", ndigits[i]);
    }
    printf("\nWhite Spaces : %d Others : %d\n", nwhite , nother);

    return 0;
}