#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: None (void).
 */
void print_number(int n)
{
	int digit;
	int is_negative = 0;
	int divisor = 1;
	int temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}

	while (temp > 0)
	{
		temp /= 10;
		divisor *= 10;
	}

	if (is_negative)
	{
		_putchar('-');
	}

	while (divisor > 1)
	{
		divisor /= 10;
		digit = n / divisor;
		n %= divisor;
		_putchar(digit + '0');
	}
}
