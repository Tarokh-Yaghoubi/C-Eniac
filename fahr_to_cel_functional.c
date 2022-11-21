//
// Created by Funlife on 10/12/2022.
//

#include <stdio.h>


#define LOWER 0
#define UPPER 300
#define STEP 20

/* first declare the functions ; */

void fahrtocel(void);
void celtofahr(void);

/* main function */

int main(void)
{
    int c;

    printf("Temperature Conversion program : \n");
    printf("1 - Fahrenheit to Celsius : \n");
    printf("2 - Celsius to Fahrenheit : \n");
    printf("Type in your choice ... \n");

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
        printf("Wrong Choice \n");


    return 0;
}

void fahrtocel(void)
{
    float fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%4.0f %6.1f \n" , fahr , (5.0/9.0) * (fahr - 32.0));
    }
}

void celtofahr(void)
{
    float cel;

    for (cel = LOWER; cel <= UPPER; cel += STEP)
    {
        printf("%4.0f %6.1f \n" , cel , (cel * 9.0/5.0) + 32.0);
    }

}

