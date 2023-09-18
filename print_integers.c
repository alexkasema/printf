#include "main.h"

/**
 * _integer - a function that prints out integers.
 * @args: List of arguments
 * Return: Number of characters printed
 */

int _integer(va_list args)
{
	int n = va_arg(args, int);

	return (_print_integers(n));
}

/**
 * _unsigned - a function that prints unsigned ints.
 * @args: List of arguments
 * Return: number of unsigned integers printed
 */

int _unsigned(va_list args)
{
	unsigned int n;

	n = va_arg(args, unsigned int);
	return (_print_unsigned_integers(n));
}

/**
 * _print_integers - a function that outputs an integer.
 * @n: integer to output.
 * Return: number of integers printed
 */

int _print_integers(int n)
{
	int count = 0;

	if (n == INT_MIN)
	{
		count += _putchar('-');
		count += _putchar('2');
		n %= 1000000000;
		n = -n;
	}

	else if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	if (n > 9)
	{
		count += _print_integers(n / 10);
	}

	count += _putchar(n % 10 + '0');

	return (count);
}

/**
 * _print_unsigned_integers - a function that outputs unsigned int.
 * @n: unsigned int to output.
 * Return: numbers of unsigned integers printed.
 */

int _print_unsigned_integers(unsigned int n)
{
	int count = 0;

	if (n > 9)
	{
		count += _print_integers(n / 10);
	}

	count += _putchar(n % 10 + '0');

	return (count);
}

