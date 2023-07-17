#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all letters of the alphabet except 'q' and 'e'
 *              in lowercase, followed by a new line using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}

	putchar('\n');

	return (0);
}

