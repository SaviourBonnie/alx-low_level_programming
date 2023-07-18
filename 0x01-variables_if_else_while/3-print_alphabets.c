#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase and uppercase alphabets
 *              followed by a new line using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
}
