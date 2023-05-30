#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */

void puts2(char *str)
{
	int x = 0, y = 0;
	char *z = str;
	int w;

	while (*z != '\0')
	{
		z++;
		x++;
	}
	y = x - 1;

	for (w = 0; w <= y; w++)
	{
		if (w % 2 == 0)
		{
			_putchar(str[w]);
		}
	}
	_putchar('\n');
}
