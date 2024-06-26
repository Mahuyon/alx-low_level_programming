#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int eya;

	if (index > 63)
		return (-1);

	eya = 1 << index;

	if (*n & eya)
		*n ^= eya;

	return (1);
}
