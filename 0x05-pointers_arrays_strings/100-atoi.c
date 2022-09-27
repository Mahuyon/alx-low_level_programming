#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int eya = 0, size = 0, oi = 0, kan = 1, y = 1, i;

	while (*(s + eya) != '\0')
	{
		if (size > 0 && (*(s + eya) < '0' || *(s + eya) > '9'))
			break;

		if (*(s + eya) == '-')
			kan *= -1;

		if ((*(s + eya) >= '0') && (*(s + eya) <= '9'))
		{
			if (size > 0)
				y *= 10;
			size++;
		}
		eya++;
	}

	for (i = eya - size; i < eya; i++)
	{
		oi = oi + ((*(s + i) - 48) * y);
		y /= 10;
	}
	return (oi * kan);
}
