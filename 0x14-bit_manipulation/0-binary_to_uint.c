#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int z;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] < '0' || b[z] > '1')
			return (0);
		result = 2 * result + (b[z] - '0');
	}
	return (result);
}

