#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int eya, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (eya = 0; b[eya] != '\0'; eya++)
		;

	for (eya--, base_two = 1; eya >= 0; eya--, base_two *= 2)
	{
		if (b[eya] != '0' && b[eya] != '1')
		{
			return (0);
		}

		if (b[eya] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
