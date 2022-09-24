#include "main.h"

/**
 * rot13 - encode a string using rot13.
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int eya = 0, i;
	char bet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	
	while (*(s + eya) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + eya) == bet[i])
			{
				*(s + eya) = rot13[i];
				break;
			}
		}
		eya++;	
	}

	return (s);
}

