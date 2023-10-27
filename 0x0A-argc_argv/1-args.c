#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments, including the program name
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Avoid unused variable warning */

	printf("%d\n", argc - 1);

	return (0);
}
