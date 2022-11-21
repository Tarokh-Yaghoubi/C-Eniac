//
// Created by tarokh.yaghoubi on 10/15/2022.
//

#include <stdio.h>

#define MAXLINE 1000

int getline(char line[] , int maxline);
void copy(char to[] , char from[]);

int main()
{
    int len; /* Current string length */
    int max; /* Maximum all time */
    char line[MAXLINE]; /* current line */
    char longest[MAXLINE]; /* longest line all time */

    max = 0;

    while ((len = getline(line , MAXLINE)) > 0)

        if (len > max)
        {
            max = len;
            copy(longest, line);
        }

    if (max > 0)
        printf("The longest all time is : %s" , longest);

    return 0;
}

int getline(char line[] , int maxline)
{
    int c , i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;

}

void copy(char to[] , char from[])
{
    int i;

    i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}