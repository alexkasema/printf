#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct symbols - A structure that contains a char symbol
 * and a pointer to a function
 * @c: a character that represents a specifier
 * @f: pointer to fuction that handles a specifier.
 */

typedef struct symbols
{
	char c;
	int (*f)(va_list args);
} symbols;

int _printf(const char *format, ...);
int _iterator(const char *format, symbols print_char[], va_list args);
int _putchar(char c);
int _char(va_list args);
int _string(va_list args);
int _integer(va_list args);
int _binary(va_list args);
int _unsigned(va_list args);
int _octal(va_list args);
int _hexadecimal(va_list args);
int _Hexadecimal(va_list args);
int _my_string(va_list args);
int _pointers(va_list args);
int _ptr_hexadecimal(unsigned long int num);

int _print_integers(int n);
int _print_unsigned_integers(unsigned int n);
int _str_len(char *str);

#endif

