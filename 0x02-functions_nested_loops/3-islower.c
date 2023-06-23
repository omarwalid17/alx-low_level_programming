#include "main.h"

/**
 * _islower - a function to check if c is lowercase
 *
 * @c: checks the input of function
 *
 * Return: 1 if 'c' is a lowercase
 *	otherwise 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
