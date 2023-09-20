#include "main.h"

/**
 * _printf- A function that produces output according to a format.
 * @format: The string that is passed
 *
 * Return: The length of string printed or -1 if no string is found.
 */

int _printf(const char *format, ...)
{
	int char_count = 0;

	va_list args;

	symbols print_char[] = {
		{'c', _char}, {'s', _string}, {'d', _integer},
		{'i', _integer}, {'b', _binary}, {'u', _unsigned},
		{'o', _octal}, {'x', _hexadecimal}, {'X', _Hexadecimal},
		{'S', _my_string}, {'p', _pointers}, {'r', _reverse_string},
		{'R', _rot13}
	};

	flags_t flags[] = {{0, 0, 0}};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	char_count = _iterator(format, print_char, flags, args);

	va_end(args);

	return (char_count);
}
