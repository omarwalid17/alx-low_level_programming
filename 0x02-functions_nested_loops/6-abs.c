#include "main.h"

/**
 * _abs - a function to check if c is lowercase
 *
 * @n: checks the input of function
 *
 * Return: 1 if 'c' is a lowercase
 *	otherwise 0 (Success)
*/

int _abs(int n)
{
	if (n < 1)
		n = (-1) * n;
	return (n);
}
