#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dv = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dv = 2 * dv + (b[i] - '0');
	}

	return (dv);
}
