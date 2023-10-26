#include "main.h"
/**
 * is_prime_number - Checks if a number is a prime number using recursion.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is a prime number, 0 if it is not.
 */
int is_prime_number(int n, int divisor)
{
	if (n <= 1) /* 0 and 1 are not prime numbers */
	{
		return (0);
	}
	if (divisor == 1) /* Base case: 2 is a prime number */
	{
		return (1);
	}
	if (n % divisor == 0) 
	{
		return (0);
	}
	return is_prime_number(n, divisor - 1);
}
