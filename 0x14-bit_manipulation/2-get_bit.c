#include "main.h"

/**
 * get_bit - Returns the bit value at an index in a decimal number
 * @n: search number
 * @index: bit index
 *
 * Return: index bit value and -1 if an error exist.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
