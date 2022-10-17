//
// Created by tarokh.yaghoubi on 10/15/2022.
//

#include <stdio.h>

#define MAXLINE 1000

/* Declaring functions */

int getline(char line[], int maxline);
void copy(char to[] , char from[]);

/* main function */

int main()
{
    int len; /* current line length */
    int max; /* maximum all time */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line all time */

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest , line);
        }
    }
    if (max > 0)
        printf("The longest string all time :  %s" , longest);
    return 0;
}

int getline(char line[], int maxline)
{
    int character , iteration;

    for (iteration = 0; iteration < maxline - 1 && (character = getchar()) != EOF && character != '\n'; ++iteration)
        line[iteration] = character;

    if (character == '\n')
    {
        line[iteration] = character;
        ++iteration;
    }
    line[iteration] = '\0';
    return iteration;

}

void copy(char to[] , char from[])
{
    int i;
    char result[MAXLINE];

    i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}