#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - printf function
 * @format: structure format
 * Return:the number
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, j, flag;
	unsigned int len = 0;
	pt_t pt[] = {
	{"c", print_c}, {"s", print_s}, {"d", print_d}, {"i", print_i},
	{NULL, NULL},
	};
	va_start(list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			flag = 0;
			while (pt[j].print != NULL)
		{
			if (format[i + 1] == pt[j].pt[0])
			{
				len = len + pt[j].print(list);
				flag = 1;
				i++;
			}
			j++;
		}
		if (flag == 0)
		{
			_putchar(format[i]);
			len = len + 1;
		}
	}
	else if (format[i] == '%' && format[i + 1] == '%')
	{
		_putchar('%');
		i++;
		len = len + 1;
	}
	else
	{
		_putchar(format[i]);
		len = len + 1;
	}
	i++;
}
va_end(list);

return (len);
}
