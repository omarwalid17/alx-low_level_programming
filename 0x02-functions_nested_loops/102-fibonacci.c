#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	/*عشان انا حددت اول رقمين كده كده*/
	int count = 3;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count < 50)
	{
		if (count == 50)
		{
			/*لو في النهاية اطبع مع سطر جديد*/
			printf("%lu \n", next);
		}
		else
		{
			/*لو انا مش قريب اطبع عادي*/
			printf("%lu, ", next);
		}
			/* Reset the variables to get the next number */
			first = second;
			second = next;
		/* after resetting the variables, you need to find the next number */
			next = first + second;
			count++;
	}
	return (0);
}
