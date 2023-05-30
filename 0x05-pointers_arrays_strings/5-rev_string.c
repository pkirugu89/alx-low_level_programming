#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int x = 0;
	int y;
	char r = s[0];

	while (s[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		x--;
		r = s[y];
		s[y] = s[x];
		s[x] = r;
	}
}
