#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by new line
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int n, ch;

	for (n = 1; n <= 10; n++)

	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}
