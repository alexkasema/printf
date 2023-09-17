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
		k >>= 1
	}

	return (count);

}
