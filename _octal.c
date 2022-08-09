#include "main.h"

/**
 * octal_num - Converts decimal to octal number.
 * @num - Decimal number to be converted.
 * @base: 8.
 *
 * Return: Counter of the digits printed.
 */
int octal_num(int num, int base)
{
	static char representation[]= "01234567";
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
