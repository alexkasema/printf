#include "main.h"

/**
 * _reverse_string - a function that prints a string in reverse.
 * @args: list of arguments
 * @fl: Pointer to structure that contains our flag
 * Return: length of string
 */

int _reverse_string(va_list args, flags_t __attribute__((unused)) *fl)
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
 * _rot13 - a fuction that encodes a string using rot13
 * @args: list of arguments
 * @fl: Pointer to structure that contains our flags
 * Return: length of string
 */

int _rot13(va_list args, flags_t __attribute__((unused)) *fl)
{
	int i, j, count = 0;
	char *str = va_arg(args, char *);

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encode[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		return (i);
	}

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				_putchar(encode[j]);
				count++;
				break;
			}
		}

		if (!letters[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
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
