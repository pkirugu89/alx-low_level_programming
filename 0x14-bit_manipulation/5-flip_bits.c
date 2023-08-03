#include "main.h"

/**
 * flip_bits - counts the bit numbers changed
 * from one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int ct;
	unsigned long int excl = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		ct = excl >> x;
		if (ct & 1)
			count++;
	}
	return (count);
}
