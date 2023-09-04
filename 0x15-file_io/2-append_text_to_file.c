#include "main.h"

/**
 * append_text_to_file - to append text at the end of a file
 *
 * @filename: the name of file
 *
 * @text_content: added content
 *
 * Return: 1 if the file exist or -1 if it does not exist
 * or if it fails
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int doc;
	int nl;
	int rw;

	if (!filename)
		return (-1);

	doc = open(filename, O_WRONLY | O_APPEND);

	if (doc == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		rw = write(doc, text_content, nl);

		if (rw == -1)
			return (-1);
	}

	close(doc);

	return (1);
}
