#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"



/**
 * print_c - function that prints a character
 * @c: operator and pointer
 * @list: print the list
 */

int _print_c(va_list c)
{
	char ch = va_arg(c, char);
	_putchar(ch);
}

/**
 * print_s - function that prints a string
 * @s: operator and pointer
 * @i: operator and number of characters in the chain
 *
 */

int printf_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i;

	if (str == NULL)
		str = "(NULL)";

	for (i = 0 ; str[i]; i++)
	{
		_putchar (str[i]);
	}
}

/**
 * print_% - function that prints %
 *
 */

int _printf_percent(const char *percent, ...)
{
	const char percent;
	va_list list;

	_putchar('%');
}
