//
// Created by Funlife on 10/13/2022.
//

#include <stdio.h>

#define CTRL(x) (x & 0x1f)

int main()
{
    int c;

    while ((c = getchar()) != EOF && c != CTRL('d'))
    {
        if (c == ' ' || c == '\t' || c == '\n' || c == '-' || c == '.')
        {
            putchar('\n');

            while ((c = getchar()) == ' ' || c == '\n' || c == '\t' || c == '-' || c == '.');
        }
        putchar(c);
    }

}