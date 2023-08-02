#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: If we reach the end of the string */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* Print the current character of the string. */
	_puts_recursion(s + 1); /* Recursively calling */
}
