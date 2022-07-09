#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - function that prints a character
 * @c:
 * @list: print the list
 * Return: number of characters printed
 */

int print_c(va_list c)
{
	char ch = va_arg(c, int);
	_putchar(ch);
	return(1);
}

/**
 * print_s - function that prints a string
 * @s: operator and pointer
 * @i: operator and number of characters in the chain
 * Return: number of characters printed
 */

int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i;

	if (str == NULL)
		str = "(NULL)";

	for (i = 0 ; str[i]; i++)
	{
		_putchar (str[i]);
	}
	return (i);
}
