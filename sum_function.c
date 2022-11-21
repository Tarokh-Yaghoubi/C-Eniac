//
// Created by tarokh.yaghoubi on 10/12/2022.
//

#include <stdio.h>

/* sum function . sum of two numbers using function in C programming */

int sum(int n , int m);


int main()
{
    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("%d %d %d \n", i , sum(2 , i) , sum(3 , i));
    }
    return 0;
}

/* the sum function */

int sum(int base , int iterable)
{
    int x;
    int p;

    p = 0;

    for (x = 0; x <= iterable; ++x)
    {
        p = base + iterable;
    }
    return p;
}