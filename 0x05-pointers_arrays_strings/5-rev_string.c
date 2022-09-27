#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int eya = 0, i, j;
	char *str, ebi;

	while (eya >= 0)
	{
		if (s[eya]  == '\0')
			break;
		eya++;
	}

	for (i = 0; i < (eya - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			ebi = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = ebi;
		}
	}
}
