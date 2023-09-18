#include "main.h"

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
