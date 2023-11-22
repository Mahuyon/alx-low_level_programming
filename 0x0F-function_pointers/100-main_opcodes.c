#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, eya;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	eya = atoi(argv[1]);

	if (eya < 0)   
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < eya; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != eya - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
