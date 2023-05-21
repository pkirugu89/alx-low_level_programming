#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase except for q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		if (letter[x] != 'e' && letter[x] != 'q')
		{
			putchar(letter[x]);
		}
	}
	putchar('\n');
	return (0);

}
