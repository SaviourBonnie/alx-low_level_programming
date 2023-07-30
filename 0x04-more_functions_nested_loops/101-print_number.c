#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int digits = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		temp = n;
	}

	while (temp / 10 != 0)
	{
		digits *= 10;
		temp /= 10;
	}

	while (digits != 0)
	{
		_putchar((n / digits) + '0');
		n %= digits;
		digits /= 10;
	}
}
