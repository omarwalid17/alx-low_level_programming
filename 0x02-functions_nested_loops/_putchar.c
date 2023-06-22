#include <unistd.h>
#include "main.h"

/**
 *_putchar write the character to stoout
 *
 *@c the character to print
 *
 *	Return: On Success 1.
 *on error, -1 is returned, and errno is set apporbately
*/

	int _putchar(char c)
	{
	return  (write(1, &c, 1));
	}
