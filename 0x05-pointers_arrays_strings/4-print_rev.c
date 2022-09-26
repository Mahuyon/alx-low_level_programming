#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int eya = 0;

	while (eya >= 0)
	{
		if (s[eya]  == '\0')
			break;
		eya++;
	}
	for (eya--; eya >= 0; eya--)
		_putchar(s[eya]);
	_putchar('\n');
}
