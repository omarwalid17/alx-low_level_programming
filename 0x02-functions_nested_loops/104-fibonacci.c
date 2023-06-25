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
        if (c1 == 0)
        {
            printf("%lu", c2);
        }
        else
        {
            printf("%lu%lu", c1, c2);
        }
        a1 = b1;
        a2 = b2;
        b1 = c1;
        b2 = c2;
        if (i == 95)
        {
            printf("\n%lu\n", c2);
        }
    }

    return (0);
}
