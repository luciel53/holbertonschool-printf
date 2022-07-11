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
	return (1);
}
/**
 * print_s - function that prints a string
 * @str: operator and pointer
 * Return: number of characters printed
 */
int print_s(va_list str)
{
	unsigned int i;
	char *s;

	s = va_arg(str, char *);
	i = 0;
		if (s == NULL)

		s = "(null)";
			while (s[i] != '\0')
			{
				_putchar (s[i]);
				i++;
				}
		return (i);
}

/**
*print_d - print decimal
*@dec: argument to print
*Return: number of characters printed
*/
int print_d(va_list dec)
{
	int n = va_arg(dec, int);
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}

/**
*print_i - prints interger
*@intg: argurment to print
*Return: number of character printed
*/
int print_i(va_list intg)
{
	int n = va_arg(intg, int);
	int num;
	int last = n % 10;
	int dig;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
