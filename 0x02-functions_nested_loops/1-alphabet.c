#include "main.h"

/**
 * print_alphabet - print the charaters from a to z in lowercase
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
