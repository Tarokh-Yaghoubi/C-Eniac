//
// Created by Funlife on 10/12/2022.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void celtofahr(void);
void fahrtocel(void);

int main(void)
{
    int c;


    printf("Temperature Conversion Program : \n");
    printf("1 - Celsius to Fahrenheit : \n");
    printf("2 - Fahrenheit to Celsius : \n");
    printf("Type in your choice : \n");

    c = getchar();

    if (c == '1')
    {
        celtofahr();
    }
    else if (c == '2')
    {
        fahrtocel();
    }
    else
        printf("Invalid Choice !\n");

}

void celtofahr(void)
{
    float cel;

    for (cel = LOWER; cel <= UPPER; cel += STEP)
    {
        printf("%4.0f %6.1f \n", cel , (9.0 * cel) / 5.0 + 32);
    }
}

void fahrtocel(void)
{
    float fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%4.0f %6.1f \n", fahr , (5.0 / 9.0) * (fahr - 32.0));
}