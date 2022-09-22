#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The input number as an integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int y;
	y = n % 10;
	if (y < 0)
	{
		_putchar(-1 + 48);
		return (-1);
	}
	else
	{
		_putchar(1 + 48);
		return (1);
	}
}
