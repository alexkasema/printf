#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct flags - A structure that contains flags for specifiers
 * @plus: the plus symbol
 * @space: the space flag
 * @hash: the hash sign flag
 *
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;

} flags_t;

/**
 * struct symbols - A structure that contains a char symbol
 * and a pointer to a function
 * @c: a character that represents a specifier
 * @f: pointer to fuction that handles a specifier.
 */
typedef struct symbols
{
	char c;
	int (*f)(va_list args, flags_t *fl);
} symbols;

int _printf(const char *format, ...);
int _iterator(const char *format, symbols print_char[], flags_t flags[], va_list args);
int _putchar(char c);
int _get_flag(char s, flags_t *fl);

int _char(va_list args, flags_t *fl);
int _string(va_list args, flags_t *fl);
int _integer(va_list args, flags_t *fl);
int _binary(va_list args, flags_t *fl);
int _unsigned(va_list args, flags_t *fl);
int _octal(va_list args, flags_t *fl);
int _hexadecimal(va_list args, flags_t *fl);
int _Hexadecimal(va_list args, flags_t *fl);
int _my_string(va_list args, flags_t *fl);
int _pointers(va_list args, flags_t *fl);
int _reverse_string(va_list args, flags_t *fl);
int _rot13(va_list args, flags_t *fl);

int _ptr_hexadecimal(unsigned long int num);
int _print_integers(int n);
int _print_unsigned_integers(unsigned int n);
int _str_len(char *str);

#endif

