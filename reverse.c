//
// Created by tarokh.yaghoubi on 10/15/2022.
//

#include <stdio.h>

#define MAXLINE 1000

int getline(char line[] , int maxline);
void reverse(char rline[]);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line , MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s" , line);
    }
    return 0;
}

int getline(char line[] , int maxline)
{
    int i , c;

    for (i = 0; i < maxline - 1 && (c = getchar()) && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void reverse(char rline[])
{
    int i , j;

    char temp;

    for (i = 0; rline[i] != '\0'; ++i);

    --i;

    if (rline[i] == '\n') --i;

    j = 0;

    while (j < i)
    {
        temp = rline[j];
        rline[j] = rline[i];
        rline[i] = temp;
        --i;
        ++j;
    }
}