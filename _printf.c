#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string.
 * Return: number of characters printed excluding the null character.
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
					count += _putchar(va_arg(arg, int));
					j++;
					break;
				case 's' :
					count += print_string(va_arg(arg, char*));
					j++;
					break;
				case 'd':
					count += print_decimal(va_arg(arg, int));
					j++;
					break;
				case '%':
					count += _putchar('%');
					j++;
					break;
				case 'r':
					count += reverse_string(va_arg(arg, char*));
					j++;
					break;
				case 'b':
					count += convert(va_arg(arg, int), 2);
					j++;
					break;
				case 'x':
					count += lower_hex(va_arg(arg, int));
					j++;
					break;
				case 'X':
					count += upper_hex(va_arg(arg, int));
					j++;
					break;
				case 'o':
					count += octal_num(va_arg(arg, int));
					j++;
					break;
				case 'p':
					count += upper_hex(va_arg(arg, int));
					j++;
					break;
				case 'u':
					count += print_unsigned_int(va_arg(arg, int));
					j++;
					break;
			}
		}
	}
	va_end(arg);

	return (count);
}
