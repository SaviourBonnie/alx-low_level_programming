#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 *
 * Return: The largest prime factor of the number 'n'
 */
long largest_prime_factor(long n)
{
	long i, max_prime;

	max_prime = -1;

	/* Remove all factors of 2*/
	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	/*Remove all other odd factors*/
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	/* If the remaining number is a prime number greater than 2*/
	if (n > 2)
		max_prime = n;

	return (max_prime);
}

/**
 * main - Entry point, prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);
	return (0);
}
