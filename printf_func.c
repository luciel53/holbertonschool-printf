#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"



/**
 * print_c - function that prints a character
 * @ch: char of variable
 * Return: number of characters printed
 */

int print_c(va_list ch)
{
	char c;
	c = va_arg(ch, int);
	_putchar(c);
	return(1);
}
/**
 * print_s - function that prints a string
 * @str: operator and pointer
 * @i: operator and number of characters in the chain
 * Return: number of characters printed
 */
int print_s(va_list str)
{
	unsigned int i;
	char *s;
	s = va_arg(str, char *);
    i = 0;
		if (s == NULL)
    		s = "(NULL)";
			while (s[i] != '\0')
    		{
        		_putchar (s[i]);
				i++;
    		}
    return (i);
}
