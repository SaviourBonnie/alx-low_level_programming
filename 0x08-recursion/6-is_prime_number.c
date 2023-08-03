#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to be checked.
 * @i: The iterator to test factors.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
	if (n < 2) /* Base case: Numbers less than 2 are not prime. */
	{
		return (0);
	}

	if (i == n) /* Base case: If i reaches n, the number is prime. */
	{
		return (1);
	}

	if (n % i == 0) /* If n is divisible by any number other than 1 */
	{
		return (0);
	}

	/* Recursive case: Increment i and call the function */
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1. otherwise returns 0.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

