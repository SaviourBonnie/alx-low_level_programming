#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial is to be calculated.
 *
 * Return: If n is lower than 0, return -1 (error).*/
int factorial(int n)
{
	if (n < 0) /* Base case: If n is lower than 0, return -1 (error).*/
	{
		return (-1);
	}
	else if (n == 0) /* Base case: Factorial of 0 is 1.*/
	{
		return (1);
	}
	else /* Recursive case: Calculate factorial using recursion.*/
	{
		return n * factorial(n - 1);
	}
}
