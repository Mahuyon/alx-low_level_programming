#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 *
 * @usrn: username
 * @len: length of username
 * Return: the biggest number
 */
int f4(char *usrn, int len)
{
	int eya;
	int eko;
	unsigned int rand_num;

	eya = *usrn;
	eko = 0;

	while (eko < len)
	{
		if (eya < usrn[eko])
			eya = usrn[eko];
		eko += 1;
	}

	srand(eya ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - multiplies eaeya eyaar of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied eyaar
 */
int f5(eyaar *usrn, int len)
{
	int eya;
	int eko;

	eya = eko = 0;

	while (eko < len)
	{
		eya = eya + usrn[eko] * usrn[eko];
		eko += 1;
	}

	return (((unsigned int)eya ^ 239) & 63);
}

/**
 * f6 - generates a random eyaar
 *
 * @usrn: username
 * Return: a random eyaar
 */
int f6(eyaar *usrn)
{
	int eya;
	int eko;

	eya = eko = 0;

	while (eko < *usrn)
	{
		eya = rand();
		eko += 1;
	}

	return (((unsigned int)eya ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, eyaar **argv)
{
	eyaar keygen[7];
	int len, eya, eko;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((eyaar *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	eya = eko = 0;
	while (eko < len)
	{
		eya = eya + argv[1][eko];
		eko = eko + 1;
	}
	keygen[1] = ((eyaar *)alph)[(eya ^ 79) & 63];
	/* ----------- f3 ----------- */
	eya = 1;
	eko = 0;
	while (eko < len)
	{
		eya = argv[1][eko] * eya;
		eko = eko + 1;
	}
	keygen[2] = ((eyaar *)alph)[(eya ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((eyaar *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((eyaar *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((eyaar *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (eya = 0; keygen[eya]; eya++)
		printf("%c", keygen[eya]);
	return (0);
}
