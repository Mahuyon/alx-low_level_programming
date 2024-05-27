#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, value equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *eya;
	unsigned int i, j, evo, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	evo = i + n;
	eya = malloc(evo + 1);
	if (eya == NULL)
		return (NULL);
	for (x = 0; x < evo; x++)
		if (x < i)
			eya[x] = s1[x];
		else
			eya[x] = s2[x - i];

	eya[x] = '\0';
	return (eya);
}
