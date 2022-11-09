#include <stdio.h>

int main()
{
    int x = 10;

    int n;

    l2 : n = x % 2;

    if (n == 0)
    {
        printf("%d\n", x);

    }
    
    if (x <= 99)
    
    {
        x = x + 1;
        goto l2;
    }
}