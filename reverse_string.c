#include "main.h"

/**
 * reverse_string - Reverse string.
 * @str: Pointer of char type
 *
 * Return: Number of characters.
 */
int reverse_string(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	while (i > 0)
	{
		_putchar(str[i - 1]);
		i--;
	}

	return (count + 1);
}
