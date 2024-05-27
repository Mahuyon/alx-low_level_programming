#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *eya;
	int i;

	if (min > max)
		return (NULL);
	eya = malloc(sizeof(*eya) * ((max - min) + 1));
	if (eya == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		eya[i] = min;
	return (eya);
}
