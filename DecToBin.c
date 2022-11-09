//
// Created by tarokh.yaghoubi on 10/30/2022.
//

#include <stdio.h>


int main()
{
    int number, r;

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

<<<<<<< HEAD
            // printf("%d\n", number);
        
        }


  return 0;
}
=======
         }

  return 0;
}

>>>>>>> 76387f1f9b478d7015deed37e8a9bde7d5ddcc76
