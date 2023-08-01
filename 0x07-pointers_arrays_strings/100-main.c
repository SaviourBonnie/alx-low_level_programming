#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;
	char *to;

	s = "Holberton";
	to = "Full Stack";
 	printf("%s\n", s);
	set_string(&s, to);
	printf("%s\n", s);
	return (0);
}
