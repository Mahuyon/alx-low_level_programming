#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **eya;
	unsigned int c, height, i, j, eko;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	eya = malloc((height + 1) * sizeof(char *));
	if (eya == NULL || height == 0)
	{
		free(eya);
		return (NULL);
	}
	for (i = eko = 0; i < height; i++)
	{
		for (c = eko; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				eko++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				eya[i] = malloc((c - eko + 2) * sizeof(char));
				if (eya[i] == NULL)
				{
					ch_free_grid(eya, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; eko <= c; eko++, j++)
			eya[i][j] = str[eko];
		eya[i][j] = '\0';
	}
	eya[i] = NULL;
	return (eya);
}
