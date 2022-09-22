#include "main.h"

/**
 * main - Prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bet[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int y, z;

	z = sizeof(bet) / sizeof(int);
	for (y = 0; y < z; y++)
	{
		_putchar(bet[y]);
	}
	_putchar('\n');
	return (0);
}
