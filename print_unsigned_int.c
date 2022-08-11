#include "main.h"

/**
 * print_unsigned_int - Prints an unsigned int.
 * @num: Number.
 *
 * Return: Counter of numbers.
 */
int print_unsigned_int(unsigned int num)
{
	static char representation[]= "0123456789";
	static char buffer[50];

	int count = 0, i = 0, j = 0;

	do
	{
		buffer[i] = representation[num%10];
		count++;
		i++;
		num /= 10;
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
