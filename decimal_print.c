#include "main.h"

/**
 * print_decimal - Prints decimal number.
 * @n - An integer.
 *
 * Return: Counter of the number of digit with minus sign included. 
 */
int print_decimal(int n)
{
    int count = 0;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n == 0)
        _putchar('0');

    if (n / 10)
    {
        print_decimal(n / 10);
        count++;
    }

    _putchar((n % 10) + '0');

    return (count + 1);
}
