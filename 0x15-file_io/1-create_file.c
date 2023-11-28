#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int eya;
	int nletters;
	int eko;

	if (!filename)
		return (-1);

	eya = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (eya == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	eko = write(eya, text_content, nletters);

	if (eko == -1)
		return (-1);

	close(eya);

	return (1);
}
