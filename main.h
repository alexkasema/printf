#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

typedef struct symbols{
	char c;
	int (*f)(va_list args);
} symbols;

int _printf(const char *format, ...);


#endif

