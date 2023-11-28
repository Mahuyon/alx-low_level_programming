#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 or -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int eya;
	int nletters;
	int eko;

	if (!filename)
		return (-1);

	eya = open(filename, O_WRONLY | O_APPEND);

	if (eya == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		eko = write(eya, text_content, nletters);

		if (eko == -1)
			return (-1);
	}

	close(eya);

	return (1);
}
