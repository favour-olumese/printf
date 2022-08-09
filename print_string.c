#include "main.h"

/**
 * print_string - Prints out a string.
 * @str: String.
 *
 * Return: Counter of the number of strings.
 */
int print_string(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}

	return (count + 1);
}
