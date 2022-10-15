//
// Created by tarokh.yaghoubi on 10/15/2022.
//

#include <stdio.h>
#define MAXLINE 1000

/* Function declaration */

int getline(char line[], int maxline);
void copy(char to[] , char from []);

/* Print the longest input line */

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line , MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest , line);
        }
    if (max > 0)
    {
        printf(" %s", longest);
    }
    return 0;
}
/* writing the functions */
int getline(char s[], int lim)
{
    int c , i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy : copy 'from' into 'to' */

void copy(char to[] , char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}