//
// Created by tarokh.yaghoubi on 10/30/2022.
//

#include <stdio.h>

int main()
{
    int number;
    int r;

    printf("Enter a number : ... \n");
    scanf("%d\n", &number);



    if (number <= 0)
    {
        printf("Number cant be 0 or Negative");
    }
    else

        while (number >= 1)
        {

            r = number % 2;
            printf("%d\n", r);
            number /=  2;
            // printf("%d\n", number);

    }

  return 0;
}