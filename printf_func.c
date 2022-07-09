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
	char ch = va_arg(c, int);
	_putchar(ch);
	return (0);
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
return (0);
}

/**
 * _printf_percent - function that prints %
 *
 */

int _printf_percent(va_list percent)
{
	_putchar('%');
	return (0);
}
