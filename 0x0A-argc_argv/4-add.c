#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int eya, eko, add = 0;

	for (eya = 1; eya < argc; eya++)
	{
		for (eko = 0; argv[eya][eko] != '\0'; eko++)
		{
			if (!isdigit(argv[eya][eko]))
			{
				printf("Error\n");
				return (1);
			}
												}
		add += atoi(argv[eya]);
	}
	printf("%d\n", add);
	return (0);
}
