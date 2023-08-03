#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: result of x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* Base case: If y is lower than 0, return -1 (error). */
	{
		return (-1);
	}
	else if (y == 0) /* Base case: Any number raised to 0 is 1. */
	{
		return (1);
	}
	else /* Recursive case: Calculate power using recursion. */
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
