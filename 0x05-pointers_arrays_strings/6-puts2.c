#include "main.h"

/**
 * puts2 - prints one char out 2 of a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int eya = 0;

	while (eya >= 0)
	{
		if (str[eya]  == '\0')
		{
			_putchar('\n');
			break;
		}
		if (eya % 2 == 0)
			_putchar(str[eya]);
		eya++;
	}
}
