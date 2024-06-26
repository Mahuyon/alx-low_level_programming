#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int eya;

	if (index > 63)
		return (-1);

	eya = 1 << index;
	*n = (*n | eya);

	return (1);
}
