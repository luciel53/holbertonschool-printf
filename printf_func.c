#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * printf_c - function that prints a character
 * @c: operator
 */

int _printf(const char *c, ...)
{
	char c;
	va_list list;
	int i;

	if (i = va_arg(list, int))
		printf("%c", c);
return (0);


}

/**
 * print_s - function that prints a string
 * @s: operator and pointer
 */

int print_C()
{
	char s;
	va_list list;
	_print("%s", va_arg(list, char));
}

/**
 * print_% - function that prints %
 *
 */

int _printf(const char *c, ...)
{
	char c;
	va_list list;

	_putchar('%');
}
