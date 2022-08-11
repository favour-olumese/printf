#include "main.h"

/**
 * octal_num - Converts octal number to decimal.
 * @num - Decimal number to be converted.
 * @base: 8.
 *
 * Return: Counter of the digits printed.
 */
int octal_num(unsigned int num)
{
	static char representation[]= "01234567";
	static char buffer[50];

	int count = 0, i = 0, j = 0;

	do
	{
		buffer[i] = representation[num%8];
		count++;
		i++;
		num /= 8;
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
