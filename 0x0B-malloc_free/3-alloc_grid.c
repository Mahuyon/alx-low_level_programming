#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **eya;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	eya = malloc(height * sizeof(int *));
	if (eya == NULL)
	{
		free(eya);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		eya[i] = malloc(width * sizeof(int));
		if (eya[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(eya[i]);
			free(eya);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			eya[i][j] = 0;

	return (eya);
}
