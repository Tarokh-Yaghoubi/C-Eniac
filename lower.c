//
// Created by tarokh.yaghoubi on 11/6/2022.
//

#include <stdio.h>

int lower(int c);

int main()
{

    lower('N');
    return 0;

}

int lower(int c)
{

    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}