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
	char *p;

	p = _strchr(s, 'W');
	if (p != NULL)
	{
		printf("Found character 'W' at position: %ld\n", p - s);
	}
	else
	{
	printf("Character 'W' not found.\n");
	}

	p = _strchr(s, 'z');
	if (p != NULL)
	{
		printf("Found character 'z' at position: %ld\n", p - s);
	}
	else
	{
		printf("Character 'z' not found.\n");
	}

	return (0);
}
