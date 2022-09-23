#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string
 * to uppercase
 * @s: input string
 * Return: the pointer to dest
 */

char *string_toupper(char *s)
{
	int eya = 0;

	while (*(s + eya) != '\0')
	{
		if ((*(s + eya) >= 97) && (*(s + eya) <= 122))
		 *(s + eya) =  *(s + eya) - 32;
		eya++;
	}

	return (s);
}
