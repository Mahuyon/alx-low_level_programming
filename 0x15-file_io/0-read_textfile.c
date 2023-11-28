#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int eya;
	ssize_t j, k;
	char *eko;

	if (!filename)
		return (0);

	eya = open(filename, O_RDONLY);

	if (eya == -1)
		return (0);

	eko = malloc(sizeof(char) * (letters));
	if (!eko)
		return (0);

	j = read(eya, eko, letters);
	k = write(STDOUT_FILENO, eko, j);

	close(eya);

	free(eko);

	return (k);
}
