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
	int (*print)();
} pt_t;

int _printf(const char *format, ...);
int _putchar(char c);

int print_s(va_list str);
int print_c(va_list ch);
int print_i(va_list intg);
int print_d(va_list dec);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif
