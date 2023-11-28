#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
/**
 *print_cont - print the content
 *@s: pointer
 */
void print_cont(char *s)
{
	int eko;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (eko = 0; eko < 16; eko++)
	{
		if (!(eko == 15))
			printf("%02x ", s[eko]);
		else
			printf("%02x\n", s[eko]);
	}
	if ((s[4] + '0') == '1')
		printf("  Class:                             ELF32\n");
	else if ((s[4] + '0') == '2')
		printf("  Class:                             ELF64\n");
	else
		exit(98);
	if ((s[5] + '0') == '1')
	{
		printf("  Data:                              2's complement, ");
		printf("little endian\n");
	}
	else if ((s[5] + '0') == '2')
	{
		printf("  Data:                              2's complement, ");
		printf("big endian\n");
	}
	else
		exit(98);
}
/**
 * ELF - is elf file?
 *@s: pointer
 */
void ELF(char *s)
{
	int eya;

	eya = (int)s[0];

	if (eya == 127 && s[1] == 'E' && s[2] == 'L' && s[3] == 'F')
	{
		print_cont(s);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: is not an ELF file");
		exit(98);
	}
}
/**
 * main - print the content of a ELF file
 * @ac: number of input arguments
 * @av: store the input arguments
 * Return: 0
 */
int main(int ac, char *av[])
{
	int efo, ali;
	char buff[16];

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename");
		exit(98);
	}
	efo = open(av[1], O_RDONLY);
	if (efo == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can not be open");
		exit(98);
	}
	ali = read(efo, buff, 16);
	if (ali == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can not be read");
		exit(98);
	}
	lseek(efo, 0, SEEK_SET);
	read(efo, buff, 16);
	ELF(buff);
	close(efo);
	return (0);
}
