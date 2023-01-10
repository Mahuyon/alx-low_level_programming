#include "main.h"

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{

	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime_number(n, 2));

}
