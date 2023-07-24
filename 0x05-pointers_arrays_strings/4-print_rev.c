#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}

	return (length);
}

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int i; /* The loop variable is declared here */

	for (i = length - 1; i >= 0; i--) /* The loop starts here */
	{
	_putchar(s[i]);
	}

	_putchar('\n');
}
