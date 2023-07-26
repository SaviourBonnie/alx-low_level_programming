#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (*ptr)
	{
		dest_len++;
		ptr++;
	}

	/* Append up to n bytes from src to dest */
	for (i = 0; i < n && *src; i++)
	{
		dest[dest_len + i] = *src;
		src++;
	}

	/* Add the terminating null byte */
	dest[dest_len + i] = '\0';

	return dest;
}
