#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct pt - tydef struct for conversion specifiers
 * @pt: struct print
 * @print: print funtion specified
 */

typedef struct pt
{
	char *pt;
	int (*print)(va_list);
} pt_t;

int _printf(const char *format, ...);
int _putchar(char c);

int print_s(va_list str);
int print_c(va_list ch);
int print_i(va_list intg);
int print_d(va_list dec);


#endif
