#include <stdio.h>



int main()
{
    int c,  inword , counter = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {

            counter = 0;
        }

        else
        {

            ++counter;
            printf(" %d\n", counter);
        }

        if (c == '0')
        {
            break;
        }

    }

}