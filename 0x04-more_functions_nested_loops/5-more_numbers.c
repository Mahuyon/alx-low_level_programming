#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
		int i, pr;

		for (i = 0; i < 10; i++)
		{
			for (pr = 0; pr < 15; pr++)
			{
				if (pr >= 10)
					_putchar((pr / 10) + 48);
				_putchar((pr % 10) + 48);
			}
			_putchar('\n');
		}
}

