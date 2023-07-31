#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *accept = "abcdefghijklmnopqrstuvwxyz";
	unsigned int len;

	len = _strspn(s, accept);
	printf("Length of prefix substring: %u\n", len);

	return (0);
}
