//
// Created by Funlife on 10/12/2022.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* Conversion of Fahrenheit to Celsius and Vice Versa in C programming (functional) */

void fahrtocel(void); // Decleration or Function prototype
void celtofahr(void); // Decleration or Function prototype

int main(void)
{
    int c;

    printf("Temperature Conversion : \n");
    printf("1 - Fahrenheit to Celsius \n");
    printf("2 - Celsius to Fahrenheit : \n");
    printf("Type in your Choice : ... ");

    c = getchar();

    if (c == '1')
    {
        fahrtocel();
    }
    else if (c == '2')
    {
        celtofahr();
    }

    else
        printf("Invalid choice ! \n");

    return 0;
}

void fahrtocel(void)
{
    float fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%4.0f %6.1f \n", fahr , (5.0/9.0) * (fahr - 32.0));
    }
}

void celtofahr(void)
{
    float cel;

    for (cel = LOWER; cel <= UPPER; cel += STEP)
    {
        printf("%4.0f %6.1f \n" , cel , (cel * (9.0/5.0) + 32.0));
    }
}

/*
 *  < FUNCTIONS IN C PROGRAMMING (OLD-STYLE) >
 *
 *  old-dtyle version of function decleration in C programming
 *  power(base , n)
 *  int base , n;
 *  {
 *      int i , p;
 *
 *      p = 1;
 *      for (i = 1; i <= n; ++i)
 *      {
 *          p = p * base;
 *      }
 *
 *      return p;
 * }
 * */