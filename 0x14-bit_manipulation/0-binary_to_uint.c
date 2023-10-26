#include "main.h"

/*
 * binary_to_uint - to convert a binary number to an unsigned int
 *
 * @b: the binary number
 *
 * Return:  the converted number or 0
 *
 **/

unsigned int binary_to_uint(const char *b)

{
	unsigned int digit = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		digit = digit * 2 + (*b++ - '0');
	}
	return (digit);
}
