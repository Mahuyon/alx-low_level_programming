#include "main.h"

/**
 * test_carre - returns the natural square root of a number.
 * @x: input number.
 * @y: iterator.
 * Return: the value.
 */
int test_carre(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + test_carre(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (test_carre(n, 2));
}
