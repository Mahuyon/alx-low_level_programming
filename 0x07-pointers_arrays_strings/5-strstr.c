#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *temph;
	char *tempn;

	while (*haystack != '\0')
	{
		temph = haystack;
		tempn = needle;
		while (*haystack != '\0' && *tempn != '\0' && *haystack == *tempn)
		{
			haystack++;
			tempn++;
		}
		if (!*tempn)
			return (temph);
		haystack = temph + 1;
	}
	return (0);
}

