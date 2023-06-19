#include <unistd.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: A c programm prints quote with write function
 *              write(int fd.const void *buf.size_t count)
 *
 * Return: 1 (Not Succecced)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
