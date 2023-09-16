#include "main.h"

/**
 * _integers - a function that prints out integers.
 * @args: List of arguments
 * Return: Number of characters printed
 */

int _integers(va_list args)
{
	int n = va_arg(args, int);

	return (_print_integers(n));
}


/**
 * _print_integers - a function that outputs an integer.
 * @n: integer to output.
 * Return: number of integers printed
 */

int _print_integers(int n)
{
	int count = 0;

	if (n < 0)
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
