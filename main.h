#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * typedef structure - struct for conversion specifiers
 * @t: type of the struct
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

int print_s(va_list s);
int print_c(va_list c);


#endif
