#include <stdio.h>
/**
 * main - prints alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
		putchar(letter[x]);
	putchar('\n');

	return (0);
}
