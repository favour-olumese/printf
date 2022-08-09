#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string.
 * Return: number of characters printed(
 * excluding the null terminator)
 */
int _printf(const char* format,...)
{
	int j, count = 0;

	va_list arg;

	va_start(arg, format);

	for(j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			count++;
			putchar(format[j]);
		}
		else
		{
			switch(format[j + 1])
			{
				case 'c':
					count++;
					_putchar(va_arg(arg, int));
					j++;
					break;
				case 's' :
					count += print_string(va_arg(arg, char*));
					j++;
					break;
				case 'd':
					count += convert(va_arg(arg, int), 10);
					j++;
					break;
				case '%':
					count++;
					_putchar('%');
					j++;
					break;
				case 'r':
					count++;
					_putchar('r');
					j++;
					break;
			}
		}
	}
	va_end(arg);

	return (count);
}
