#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int eya = 0;

	while (eya >= 0)
	{
		if (str[eya]  == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[eya]);
		eya++;
	}
}
