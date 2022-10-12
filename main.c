#include <stdio.h>

#define YES 1
#define NO 0

int main()
{
    int c,  inword , counter = 0;
    inword = NO;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            printf(" %d\n", counter);
            inword = NO;
            counter = 0;
        }
        else
        {
            ++counter;
        }

        if (c == '0')
        {
            break;
        }

    }

}