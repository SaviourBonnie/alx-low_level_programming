#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return length;
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The start index of the string.
 * @end: The end index of the string.
i *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end) /* Base case: If the start index is greater*/
	{
		return (1);
	}

	if (s[start] != s[end]) /* If the characters don't match, it's not a palindrome. */
	{
		return (0);
	}

	/* Recursive case: Check the next pair of characters. */
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	/* Call the helper function to check if the string is a palindrome. */
	return (is_palindrome_helper(s, 0, length - 1));
}

