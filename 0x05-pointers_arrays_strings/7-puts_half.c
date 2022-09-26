#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int eya = 0, i;

	while (eya >= 0)
	{
		if (str[eya]  == '\0')
			break;
		eya++;
	}

	if (eya % 2 == 1)
		i = eya / 2;
	else
		i = (eya - 1) / 2;

	for (i++; i < eya; i++)
		_putchar(str[i]);
	_putchar('\n');
}
