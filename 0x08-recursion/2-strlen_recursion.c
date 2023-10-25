/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string for which to find the length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Base case: If the current character is the null terminator */
	{
		return 0;  /* The length of the string is 0 */
	}
	else
	{
		return 1 + _strlen_recursion(s + 1); /* Recursively call with the next character */
	}
}
