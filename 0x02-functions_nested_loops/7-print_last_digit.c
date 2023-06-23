#include "main.h"

/**
 * print_last_digit - a function to check if c is lowercase
 *
 * @n: checks the input of function
 *
 * Return: 1 if 'c' is a lowercase
 *	otherwise 0 (Success)
*/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;

	_putchar(ld + '0');
	return (ld);

}
