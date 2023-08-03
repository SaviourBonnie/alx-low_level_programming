#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string for which length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case: (null terminator), return 0.*/
	{
		return 0;
	}

	return 1 + _strlen_recursion(s + 1); /*Recursively call*/
}
