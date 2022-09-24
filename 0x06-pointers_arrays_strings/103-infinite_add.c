#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size.
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0, y = 0, op, temp, nu, nue, eya = 0;
	
	while (*(n1 + x) != '\0')
	x++;
	while (*(n2 + y) != '\0')
	y++;
	if (x >= y)
	temp = x;
	else
	temp = y;
	if (size_r <= temp + 1)
		return (0);
	r[temp + 1] = '\0';
	x--, y--, size_r--;
	nu = *(n1 + x) - 48, nue = *(n2 + y) - 48;
	while (temp >= 0)
	{
		op = nu + nue + eya;
		if (op >= 10)
			eya = op / 10;
		else
			eya = 0;
		if (op > 0)
		*(r + temp) = (op % 10) + 48;
		else
		*(r + temp) = '0';
		if (x > 0)
		x--, nu = *(n1 + x) - 48;
		else
		nu = 0;
		if (y > 0)
		y--, nue = *(n2 + y) - 48;
		else
		nue = 0;
		temp--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

