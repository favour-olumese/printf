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
int _printf(char* format,...)
{
	char *traverse, *str = format;
	int i, count = 0;
	char *s;

	va_list arg;

	va_start(arg, format);

	for(traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			if (*traverse == '\0')
				return (1);

			putchar(*traverse);
			traverse++;
        	}
		// If traverse = '%'
	        traverse++;

	        switch(*traverse)
        	{
			case 'c' : i = va_arg(arg, int);
				   putchar(i);
	                       	   break;

			case 'd' : i = va_arg(arg, int);
				   if
				   {
					putchar('-');
					i = -i;
				   }
				   fputs(convert(i, 10), stdout);
				   break;

			case 'i' : i = va_arg(arg, int);
				   if (1 < 0)
				   	i = -i;
				   fputs(convert(i, 10), stdout);
				   break;

			case 'u' : i = va_arg(arg, int);
				   if (i < 0)
					   i = -i;
				   fputs(convert(i, 10), stdout);
				   break;

			case 'o': i = va_arg(arg, unsigned int);
				  if(i < 0)
					  i = -i;
				  fputs(convert(i, 8), stdout);
				  break;

			case 's': s = va_arg(arg, char *);
				  fputs(s, stdout);
				  break;

			case 'x': i = va_arg(arg, unsigned int);
				  if(i < 0)
					  i = -i;
				  fputs(convert(i, 16), stdout);
				  break;

			case 'X': i = va_arg(arg, unsigned int);
				  if (i < 0)
					  i = -i;
				  fputs(convert(i, 16), stdout);
				  break;
			case 'p': i = va_arg(arg, unsigned int);
				  if(i < 0)
					  i = -i;
				  fputs("0x", stdout);
				  fputs(convert(i, 16), stdout);
				  break;

			case '%': i = va_arg(arg, int);
				  putchar('%');
				  break;

			case 'r': i = va_arg(arg, int);
				  fputs("%r", stdout);
				  break;

			case 'b': i = va_arg(arg, unsigned int);
				  fputs(convert(i, 2), stdout);
				  break;
		}
	}
	va_end(arg);

	return (count);
}

/**
 * convert - Converts a decimal number to specific base.
 * @num: Number to convert.
 * @base: Base to convert to.
 *
 * Return: Pointer to a char.
 */
char *convert(int num, int base)
{
	static char Representation[]= "0123456789abcdef";
	static char buffer[50];
	char *ptr;
	
	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Representation[num%base];
		num /= base;
	}while(num != 0);

	return(ptr);
}
