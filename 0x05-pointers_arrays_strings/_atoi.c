#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Default sign is positive */
	int i = 0;

	/* Skip leading non-numeric characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert the numeric part of the string to an integer */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
	/* Check for integer overflow */
	if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
	{
		if (sign == 1)
		return (INT_MAX);
	else
		return (INT_MIN);
        }

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
