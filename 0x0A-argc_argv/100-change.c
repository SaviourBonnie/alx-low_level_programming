#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments, including the program name
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int zero = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

		cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", zero);
		return (0);
	}

		coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents--;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}
