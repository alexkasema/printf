#include "main.h"

/**
 * _reverse_string - a function that prints a string in reverse.
 * @args: list of arguments
 * Return: length of string
 */

int _reverse_string(va_list args)
{
	int i, len = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		return (i);
	}

	len = _str_len(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}








/**
 * _str_len - a function that calculates length of a string.
 * @str: pointer to string
 * Return: length of string
 */

int _str_len(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
