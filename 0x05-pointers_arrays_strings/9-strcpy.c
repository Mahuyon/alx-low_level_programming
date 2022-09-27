#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src, including the terminating 
 * null byte, to the buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int eya = 0;

	while (eya >= 0)
	{
		*(dest + eya) = *(src + eya);
		if (*(src + eya) == '\0')
			break;
		eya++;
	}
	return (dest);
}
