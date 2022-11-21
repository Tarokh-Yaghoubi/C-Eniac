//
// Created by tarokh.yaghoubi on 10/12/2022.
//

#include <stdio.h>

int power(int n , int m);

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
    {
        printf("%d %d %d \n", i , power(2 , i) , power(3 , i));
    }
    return 0;
}

int power(int base , int iterable)
{
    int a , b;

    a = 1;


    for (b = 1; b <= iterable; ++b)
    {

        a = a * base;
    }
    return a;
}