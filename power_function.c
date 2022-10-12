//
// Created by tarokh.yaghoubi on 10/12/2022.
//

#include <stdio.h>

/* a program to calculate the sum of two numbers */

int power(int n , int m); // declared the power function

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
    {
        printf("%d %d %d\n", i , power(2,  i), power(3, i));
    }
    return 0;
}

int power(int base, int iterable)
{
    int p , x;
    p = 1;

    for (x = 1; x <= iterable; ++x)
    {
        p = p * base;
    }
    return p;
}