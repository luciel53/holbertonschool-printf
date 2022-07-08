#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - printf function
 * @format: structure format
 * @format_t: structure format
 * Return: ....
 */

int _printf(const char *format, ...)
{
	unsigned int i, j;
	format_t ptr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"r", print_r},
		{NULL, NULL}
	};

	va_list list;
char *format_t;
va_start(list, format);
i = 0;
	while (format[i])
	{
		j = 0;
		while (ptr[j].pt != NULL)
		{
			if (*(ptr[j]).pt == format[i])
			{
				printf("%s", format_t);
				ptr[j].f(list);
				break;
			}
				j++;
		}
		i++;
	}
va_end(list);
return (0);
}
