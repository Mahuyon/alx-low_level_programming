#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
		int pr;

			for (pr = 48; pr < 58; pr++)
				{
				if (pr != 50 && pr != 52)
				_putchar(pr);
			}
		_putchar('\n');
}

