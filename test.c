//
// Created by tarokh.yaghoubi on 11/6/2022.
//

#include <stdio.h>

int main()
{
    int i;


    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    for (i = 0; i < 10; ++i)
        for (int  x = 0; x < 10; ++x)
        {
            if (arr[i] == arr2[x]) {
                printf("%d\t%d\t\n", arr[i], arr2[x]);
            }
        }
    return 0;
}
