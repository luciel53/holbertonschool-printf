#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * typedef structure - it is the struction
 * @t: type......
 */

typedef struct format
{
	char *pt;
	int (*f)(va_list);
} format_t;


int _printf(const char *format, ...);
int _putchar(char c);
int print_s(va_list s);
int print_c(va_list c);
int print_percent(va_list percent);
int print_r(va_list r);







#endif
