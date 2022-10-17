//
// Created by tarokh.yaghoubi on 10/17/2022.
//

#include <stdio.h>

void rcomment(int c);
void incomment(void);
void echo_quote(int c);

int main(void)
{
    int c , d;

    printf("To Check /* Quoted String */ \n");

    while ((c = getchar()) != EOF)
        rcomment(c);

    return 0;
}

void rcommnent(int c)
{
    int d;

    if (c == '/')
    {
        if ((d = getchar()) == '*')
            incomment();

        else if (d == '/')
        {
            putchar(c);
            rcomment(d);
        }
        else
        {
            putchar(c);
            putchar(d);
        }
    }
    else if (c == '\'' || c == '"')
        echo_quote(c);
    else
        putchar(c);
}

