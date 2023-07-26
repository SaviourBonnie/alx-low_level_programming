#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move the pointer to the end of dest */
	while (*ptr)
		ptr++;

	/* Append src to dest */
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}
