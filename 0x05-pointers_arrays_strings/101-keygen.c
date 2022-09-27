#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: 0 Always.
 */
int main(void)
{
	int x = 0, y = 0;
	time_t gan;

	srand((unsigned int) time(&gan));
	while (y < 2772)
	{
		x = rand() % 128;
		if ((y + x) > 2772)
			break;
		y += x;
		printf("%c", x);
	}
	printf("%c\n", (2772 - y));
	return (0);
}
