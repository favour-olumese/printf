#include "main.h"

/**
 * lower_hex - Converts decimal to hexadecimal in lower case.
 * @num: Number to be converted.
 * @base: 16.
 *
 * Return: Returns the number of characters printed.
 */
int lower_hex(int num, int base)
{
	static char representation[]= "0123456789ABCDEF";
	static char buffer[50];

	int count = 0, i = 0, j = 0;

	if (num < 0)
	{
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
		putchar(buffer[j - 1]);
		j--;
	}

	return(count);
}

/**
 * upper_hex - Converts decimal to hexadecimal in upper case
 * @num: Number to be converted.
 * @base: 16.
 *
 * Return: Returns the number of characters printed.
 */

int upper_hex(int num, int base)
{
	static char representation[]= "0123456789ABCDEF";
	static char buffer[50];

	int count = 0, i = 0, j = 0;

	if (num < 0)
	{
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
		putchar(buffer[j - 1]);
		j--;
	}

	return(count);
}
