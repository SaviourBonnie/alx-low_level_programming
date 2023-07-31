#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *haystack = "Hello, World!";
	char *needle = "World";
	char *result;

	result = _strstr(haystack, needle);
	if (result != NULL)
	{
		printf("Substring found at: %s\n", result);
	}
	else
	{
		printf("Substring not found.\n");
	}

	return (0);
}
