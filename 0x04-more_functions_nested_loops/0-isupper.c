/**
 * _isupper - check if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	/* ASCII codes for uppercase letters are 65 to 90 */
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

