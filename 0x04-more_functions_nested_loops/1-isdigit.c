/**
 * _isdigit - check if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    /* ASCII codes for digits are 48 to 57 */
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

