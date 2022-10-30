//
// Created by tarokh.yaghoubi on 10/30/2022.
//

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000


int main()
{

    int year;

    printf("Enter the year : ... \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf(" %d is a leap year .", year);
    }
    else
        printf("%d is not a leap year", year);


    return 0;


}
