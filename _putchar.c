#include <unistd.h>
/**
 * _putchar - Writes a character to stdout
 * c: The character to print
 *
 * Return: (1) is returned on success && On error, (-1) is returned.
 */

int _putchar(char c)
{

	return write(1, &c, 1);
}
