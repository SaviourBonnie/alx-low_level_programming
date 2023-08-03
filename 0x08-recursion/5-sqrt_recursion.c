#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which the square root is to be calculated.
 * @i: The iterator to test square roots.
 *
 * Return: The square root of n, if found.
 */
int find_sqrt(int n, int i)
{
	if (i * i == n) /* If the square of i is equal to n, */
	{
		return (i);
	}
	else if (i * i > n) /* If the square of i is greater than n. */
	{
		return (-1);
	}

	/* Recursive case: Increment i and call the function. */
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Base case: If n is negative, no natural square root exists. */
	{
		return (-1);
	}

	/* Call the helper function with initial value of i set to 0. */
	return (find_sqrt(n, 0));
}
