#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string.
 * Return: number of characters printed(
 * excluding the null terminator)
 *
 */
int _printf(const char *format, ...)
{
	int count;
	int result = 0;
	int flag = 0;
	va_list arg;
	
	va_start(arg, format);

	if (format == NULL)
	{
		return (0);
	}
	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			flag = 1;
		}
		else if (flag == 1)
		{
			flag = 0;
			switch (format[count])
			{
				case 'c':
					putchar(va_arg(arg, int));
					total += 1;
					break;
				case 's':
					total = _string(va_arg(arg, char *));
					break;
				case '%':
					putchar('%');
					total += 1;
					break;
				default:
					_putchar('%');
					_putchar(format[count]);
					total += 2;
			}

		}
		else
		{
			putchar(format[count]);
			total += 1;
		}
	}
	va_end(arg);
	return (total);
}


