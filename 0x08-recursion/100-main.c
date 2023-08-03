#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("abcddcba");
	printf("abcddcba: %d\n", r);
	r = is_palindrome("abcdcba");
	printf("abcdcba: %d\n", r);
	r = is_palindrome("abcdecba");
	printf("abcdecba: %d\n", r);
	r = is_palindrome("I guess I thought the dream-space would be all about the visual, but it's more about the feeling. My question is what happens when you start messing with the physics of it.ti fo scisyhp eht htiw gnissem trats uoy nehw sneppah tahw si noitseuq yM .gnileef eht tuoba erom t'is tub ,lausiv eht tuoba lla eb dluow ecaps-maerd eht thguoht I sseug I");
	printf("Long string: %d\n", r);

	return (0);
}

