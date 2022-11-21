//
// Created by tarokh.yaghoubi on 10/12/2022.
//

#include <stdio.h>

/* A function to power two numbers */

int power(int n , int m);

int main()
{
    int i;

    for (i = 0; i < 10000; ++i)
    {
        printf("%d %d %d \n" , i , power(2 , i) , power(3 , i));
    }
    return 0;
}

/* Power function */

int power(int base /* the base number '2' - '3' */, int iterable /* the 'i' iteration*/ )
{
    int r , g;

    r = 1;
    int result;

    for (g = 1; g <= iterable; ++g)
    {
        result = base + iterable;
    }
    return result;
}