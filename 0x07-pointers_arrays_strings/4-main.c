#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "Hello, World!";
	char *accept = "Wrd";
	char *result;

	result = _strpbrk(s, accept);
	if (result != NULL)
	{
		printf("First matching byte in the string: %c\n", *result);
	}
	else
	{
		printf("No matching byte found.\n");
	}

	return (0);
}
