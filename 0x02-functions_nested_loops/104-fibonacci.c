#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
    int i;
    unsigned long int a1, a2, b1, b2, c1, c2;

    a1 = 0;
    a2 = 1;
    b1 = 0;
    b2 = 2;

    printf("%lu, %lu", a2, b2);

    for (i = 0; i < 96; i++)
    {
        c1 = a1 + b1;
        c2 = a2 + b2;
        if (c2 > 999999999)
        {
            c1++;
            c2 %= 1000000000;
        }
        printf(", ");
        if (c1 == 0) // added conditional statement here
        {
            printf("%lu", c2); // print only the second part
        }
        else
        {
            printf("%lu%lu", c1, c2); // print both parts
        }
        a1 = b1;
        a2 = b2;
        b1 = c1;
        b2 = c2;
        if (i == 95) // added conditional statement here
        {
            printf("\n%lu\n", c2); // print only the second part of the last number
        }
    }

    return (0);
}
