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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
