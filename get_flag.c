#include "main.h"

/**
 * _get_flag - A function that checks the format for a flag
 * @s: The format string to check
 * @fl: Pointer to structure that has our flags
 *
 * Return: (1) if flag was found (0) if not
 */

int _get_flag(char s, flags_t *fl)
{
	int i = 0;

	switch (s)
	{
		case '+':
			fl->plus = 1;
			i = 1;
			break;
		case ' ':
			fl->space = 1;
			i = 1;
			break;
		case '#':
			fl->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
