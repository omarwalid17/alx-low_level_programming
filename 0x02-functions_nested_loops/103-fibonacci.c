#include <stdio.h>

/**
 * main - prints the sum of the even Fibonacci numbers below 4,000,000
 * Return: 0
 */

int main(void)
{
	long int a, b, c, sum;

	a = 1;
	b = 2;
	c = a + b;
	sum = 2;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
		c = a + b;
	}

	printf("%ld\n", sum);

	return (0);
}
