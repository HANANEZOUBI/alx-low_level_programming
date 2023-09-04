#include "main.h"

/**
 * read_textfile - to  read a text file and print it
 *
 * @filename: the name of file to read
 *
 * @letters: number of letters to read
 *
 * Return: number of letters read or 0
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int doc;
	ssize_t nr, nw;
	char *buf;

	if (!filename)
		return (0);

	doc = open(filename, O_RDONLY);

	if (doc == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nr = read(doc, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	close(doc);

	free(buf);

	return (nw);
}
