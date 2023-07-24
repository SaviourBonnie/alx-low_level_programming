#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
	*dest_ptr = *src;
	src++;
	dest_ptr++;
	}

	*dest_ptr = '\0'; /* Add the terminating null byte */

	return (dest);
}
