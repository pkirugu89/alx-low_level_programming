#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase followed by new line
 *
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
