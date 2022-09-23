#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int eya = 0, i;
	int minu[] = {97, 101, 111, 116, 108};
	int maju[] = {65, 69, 79, 84, 76};
	int tab[] = {52, 51, 48, 55, 49};
	
	while (*(s + eya) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + eya) == minu[i] || *(s + eya) == maju[i])
			{
				*(s + eya) = tab[i];
				break;
			}
		}
		eya++;	
	}

	return (s);
}
