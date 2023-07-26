#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination buffer.
 * @src: The source string to copy.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad the remaining characters with null bytes if n is greater than src length */
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}
