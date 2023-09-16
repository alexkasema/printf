#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct symbols{
	char c;
	int (*f)(va_list args);
} symbols;

int _printf(const char *format, ...);
int _iterator(const char *format, symbols print_char[], va_list args);
int _putchar(char c);
int _char(va_list args);
int _string(va_list args);
int _integer(va_list args);
int _print_integers(int n);

#endif

