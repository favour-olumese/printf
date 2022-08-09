#include "main.h"

/**
 * convert - Converts a number to decimal from a given base.
 * @num: Numbers
 * @base: Base to convert from.
 *
 * Return: Counter of numbers.
 */
int convert(int num, int base)
{
	static char representation[]= "0123456789abcdef";
	static char buffer[50];

	int count = 0, i = 0, j = 0;

	if (num < 0)
	{
		count++;
		_putchar('-');
		num = -num;
	}
	do
	{
		buffer[i] = representation[num%base];
		count++;
		i++;
		num /= base;
	}while(num != 0);

	while (buffer[j] != '\0')
	{
		j++;
	}

	while (j > 0)
	{
		_putchar(buffer[j - 1]);
		j--;
	}

	return(count);
}
