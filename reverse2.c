//
// Created by tarokh.yaghoubi on 10/30/2022.
//

#include <stdio.h>

int i;

int main()
{
    int number, reverse_number = 0;
    printf("Enter a number : .. \n");
    scanf("%d", &number);

    while (number != 0)
    {
        reverse_number = reverse_number * 10;
        reverse_number = reverse_number + number % 10;
        number = number / 10;
    }

    printf("reverse number is : %d\n", reverse_number);
    return 0;

}