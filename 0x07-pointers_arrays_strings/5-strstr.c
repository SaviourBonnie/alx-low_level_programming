#include "main.h"
#include <stddef.h> /* Include this header for NULL definition*/

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the input string.
 * @needle: Pointer to the substring to locate.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack != '\0')
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0') /* If entire substring is found, return haystack */
		{
			return haystack;
		}

		haystack++;
	}

	return 	(NULL);
}

