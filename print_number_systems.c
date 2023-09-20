#include "main.h"

/**
 * _binary - A function that converts and prints int to binary
 * @args: List of arguments
 * @fl: Pointer to structure containing our flags
 * Return: Number of characters printed
 */

int _binary(va_list args, flags_t __attribute__((unused)) *fl)
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
 * @args: List of argumets
 * @fl: Pointer to structure that contains our flags
 * Return: Number of octal characters printed
 */

int _octal(va_list args, flags_t *fl)
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

	if (fl->hash == 1)
		count += _putchar('0');

	for (i = index - 1; i >= 0; i--)
		_putchar(octal_digits[i]);

	return (count);
}

/**
 * _hexadecimal- A function that converts uns int to hexadecimal
 * in lowercase
 * @args: List of arguments
 * @fl: Pointer to a structure that contains our flags
 * Return: Number of hexadecimal values printed
 */

int _hexadecimal(va_list args, flags_t *fl)
{
	int i, j, holder, index = 0, count = 0;
	unsigned int num;
	char hexa_decimal[32];
	char str[] = "0x";

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		holder = num % 16;

		if (holder < 10)
			hexa_decimal[index] = '0' + holder;
		else
			hexa_decimal[index] = 'a' + (holder - 10);

		num /= 16;
		index++;
		count++;
	}

	if (fl->hash == 1)
	{
		for (j = 0; str[j]; j++)
			count += _putchar(str[j]);
	}

	for (i = index - 1; i >= 0; i--)
		_putchar(hexa_decimal[i]);

	return (count);
}

/**
 * _Hexadecimal - A function that converts uns int to Hexadecimal
 * in uppercase
 * @args: A list of arguments
 * @fl: A pointer to a structure that contains our flags
 * Return: Number of hexadecimal characters printed
 */

int _Hexadecimal(va_list args, flags_t *fl)
{
	int i, j, holder, index = 0, count = 0;
	unsigned int num;
	char Hexa_decimal[32];
	char str[] = "0X";

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	while (num > 0)
	{
		holder = num % 16;

		if (holder < 10)
			Hexa_decimal[index] = '0' + holder;
		else
			Hexa_decimal[index] = 'A' + (holder - 10);
		num /= 16;
		index++;
		count++;
	}

	if (fl->hash == 1)
	{
		for (j = 0; str[j]; j++)
			count += _putchar(str[j]);
	}
	for (i = index - 1; i >= 0; i--)
		_putchar(Hexa_decimal[i]);

	return (count);
}
