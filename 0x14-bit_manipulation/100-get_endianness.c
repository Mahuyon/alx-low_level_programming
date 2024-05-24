#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *eko;

	i = 1;
	eko = (char *) &i;

	return ((int)*eko);
}
