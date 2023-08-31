#include "main.h"

/**
 * get_bit - to return the value of a bit at a given index
 *
 * @n: insigned int
 * @index: bit wanted
 * Return: the value of the bit at index or -1 if an error occured
 *
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n << index & 1);
}
