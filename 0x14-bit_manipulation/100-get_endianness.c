#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if it's big endian, 1 if it's little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
