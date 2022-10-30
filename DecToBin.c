//
// Created by tarokh.yaghoubi on 10/30/2022.
//

#include <stdio.h>

int main()
{
    int number;
    int r;
    number = 51;

    while (number >= 1)
    {

        r = number % 2;
        printf("%d\n", r);
        number /=  2;
        // printf("%d\n", number);

    }

    return 0;
}