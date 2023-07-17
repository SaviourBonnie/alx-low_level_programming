#include <stdio.h>
/**
 * main - entry point
 * Description: Prints the alphabet in lowercase using putchar
 * Return: 0 (success)
 */

int main(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');

    return (0);
}
