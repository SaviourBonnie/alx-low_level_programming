#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates random valid passwords for 101-crackme.
 * @password: The buffer to store the generated password.
 */
void generate_password(char *password)
{
	int i, sum, rand_num;
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL)); /* Seed the random number generator with the current time */

	/* Generate 83 random characters for the password */
	for (i = 0, sum = 0; sum < (2772 - 122); i++)
	{
		rand_num = rand() % 62;
		password[i] = charset[rand_num];
		sum += password[i];
	}

	/* Calculate the last character needed to reach the target sum (2772) */
	password[i] = 2772 - sum;
}

/**
 * main - Entry point. Calls generate_password to create random passwords.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int i;

	generate_password(password);

	/* Print the generated password */
	for (i = 0; i < 83; i++)
		_putchar(password[i]);
	_putchar('\n');

	return (0);
}
