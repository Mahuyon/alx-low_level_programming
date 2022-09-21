#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(bet[i]);
	}
	putchar('\n');
	return (0);
}
