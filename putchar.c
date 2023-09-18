#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	static char buffer[1024];
	int bi = 0;

	if (bi == 1024)
	{
		return (write(1, &c, 1));
		bi = 0;
	}
	buffer[bi++] = c;

	if (bi > 0)
	{
		write(1, buffer, bi);
		bi = 0;
	}
	return (1);
}
