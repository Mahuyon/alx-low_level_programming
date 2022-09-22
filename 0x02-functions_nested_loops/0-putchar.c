#include "main.h"

/**
 * main - Prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bet[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int y, z;

	z = sizeof(bet) / sizeof(int);
	for (y = 0; y < z; y++)
	{
		_putchar(bet[y]);
	}
	_putchar('\n');
	return (0);
}
