#include "main.h"

/**
 * _pointers- A function that prints a pointer address
 *@args: A list of arguments
 *
 *Return: Number of characters printed
 */

int _pointers(va_list args)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b, i;

	ptr = va_arg(args, void *);

	if (ptr == NULL)
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);


		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = _ptr_hexadecimal(a);
	return (b + 2);
}

/**
 *_ptr_hexadecimal- A function that converts int to hexadecimal
 *@num: Number to convert
 *Return: Number of characters printed
 */

int _ptr_hexadecimal(unsigned long int num)
{
	int i, holder, index = 0, count = 0;
	char hexa_decimal[32];

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

	for (i = index - 1; i >= 0; i--)
		_putchar(hexa_decimal[i]);

	return (count);
}
