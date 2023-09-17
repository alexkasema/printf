#include "main.h"

/**
 * _binary - A function that converts and prints int to binary
 *@args: List of arguments
 *
 *Return: Number of characters printed
 */

int _binary(va_list args)
{
	unsigned int i, num, k = 1;
	int count = 0, flag = 0;

	num = va_arg(args, unsigned int);
	k <<= (sizeof(unsigned int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		if (k & num)
		{
			count += _putchar(1 + '0');
			flag = 1;
		}
		else
		{
			if (flag == 1 || i == sizeof(unsigned int) * 8 - 1)
				count += _putchar(0 + '0');
		}
		k >>= 1;
	}

	return (count);
}

/**
 * _octal - A function that converts an unsigned int to ocatal value
 *@args: List of argumets
 *
 *Return: Number of octal characters printed
 */

int _octal(va_list args)
{
	int i, count = 0;
	unsigned int num, index = 0;
	char octal_digits[32];

	num = va_arg(args, int);

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		octal_digits[index] = '0' + (num % 8);
		num /= 8;
		index++;
		count++;
	}

	for (i = index - 1; i >= 0; i--)
		_putchar(octal_digits[i]);

	return (count);
}
