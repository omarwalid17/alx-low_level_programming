#include "main.h"
/**
*print_to_98 - a function to check if c is lowercase
*
* @n : First Input
*
*Return: Always 0 (Success)
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n ; count > 98 ; count--)
			printf("%d, ", count);
	else
		for (count = n ; count < 98 ; count++)
			printf("%d, ", count);
	printf("98\n");
}
