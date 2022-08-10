#include "main.h"

/**
 * lower_hex - Converts decimal to hexadecimal in lower case.
 * @num: Number to be converted.
 * @base: 16.
 *
 * Return: Returns the number of characters printed.
 */
int lower_hex(unsigned int num)
{
	static char representation[]= "0123456789abcdef";
	static char buffer[50];

	int count = 0, i = 0, j = 0;

	do
	{
		buffer[i] = representation[num%16];
		count++;
		i++;
		num /= 16;
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

/**
 * upper_hex - Converts decimal to hexadecimal in upper case
 * @num: Number to be converted.
 * @base: 16.
 *
 * Return: Returns the number of characters printed.
 */

int upper_hex(unsigned int num)
{
	static char representation[]= "0123456789ABCDEF";
	static char buffer[50];

	int count = 0, i = 0, j = 0;

	do
	{
		buffer[i] = representation[num%16];
		count++;
		i++;
		num /= 16;
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
