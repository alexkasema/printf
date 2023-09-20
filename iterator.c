#include "main.h"
/**
 * _iterator- A function that goes through the format string printing
 *	each character while searching for format specifiers
 *@format: The string to print out
 *@print_char: An array of functions that will be executed depending
 *	on the character specifier
 *@args: A list of arguments from the function
 *Return: The number of characters printed
 */
int _iterator(const char *format, symbols print_char[], flags_t flags[], va_list args)
{
	int i = 0, j, char_count = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%' && format[i + 1] != '\0')
		{
			int flag = 0;

			while (_get_flag(format[i + 1], flags))
			{
				i++;
				break;
			}
			for (j = 0; j < 13; j++)
			{
				if (format[i + 1] == print_char[j].c)
				{
					flag = 1;
					char_count += print_char[j].f(args, flags);
					i++;
					break;
				}
			}
			if (!flag)
			{
				char_count += _putchar('%');
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			char_count += _putchar('%');
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
			char_count += _putchar(format[i]);
		i++;
	}
	return (char_count);
}
