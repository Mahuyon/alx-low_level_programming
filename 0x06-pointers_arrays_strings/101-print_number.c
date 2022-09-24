#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int eya, x, y;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	eya = 1;
	
	while (y > 9)
	{
		y /= 10;
		eya *= 10;
	}

	for (; eya >= 1; eya /= 10)
	{
		_putchar(((x / eya) % 10) + 48);
	}
}

