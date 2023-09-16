#include "main.h"

/**
 * _char - a function that prints a character.
 * @args: list of arguments.
 * Return: character printed.
 */

int _char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * _string - a function that prints a string.
 * @args: list of arguments.
 * Return: number of characters printed.
 */

int _string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
		str = "";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
