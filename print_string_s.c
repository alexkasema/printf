#include "main.h"

/**
 * _char - a function that prints a character.
 * @args: list of arguments.
 * Return: Number of character printed.
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
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * _my_string - a function that prints a customized string
 * @args: List of arguments.
 * Return: number of characters printed.
 */

int _my_string(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
			count += _putchar(str[i]);

		else if (str[i] > 14)
			count += _printf("\\x%X", str[i]);
		else
			count += _printf("\\x0%X", str[i]);
	}
	return (count);
}
