#include "main.h"

/**
 * _isalpha - a function to check if c is lowercase
 *
 * @c: checks the input of function
 *
 * Return: 1 if 'c' is a lowercase
 *	otherwise 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
