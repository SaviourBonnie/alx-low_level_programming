#include "main.h"
#include <stddef.h> /* Include this header for NULL definition*/

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the input string.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c) /* Check for the null terminator as well */
	{
		return (s);
	}

	return (NULL);
}
