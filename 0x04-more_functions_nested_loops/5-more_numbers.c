#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int x, c;

	for (c = 0; c <= 9; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
