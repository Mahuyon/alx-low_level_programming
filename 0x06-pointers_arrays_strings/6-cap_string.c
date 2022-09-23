#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: input string
 * Return: the pointer to dest
 */

char *cap_string(char *s)
{
	int eya = 0, i;
	int tab[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if ((*(s + eya) >= 97) && (*(s + eya) <= 122))
		 *(s + eya) =  *(s + eya) - 32;
	eya++;
	while (*(s + eya) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + eya) == tab[i])
			{
				if ((*(s + (eya + 1)) >= 97) && (*(s + (eya + 1) <= 122))
						*(s + (eya + 1) = *(s + (eya + 1)) - 32;
							break;
			}
		}
		eya++;	
	}

	return (s);
}
