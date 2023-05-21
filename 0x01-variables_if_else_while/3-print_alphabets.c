#include <stdio.h>
/**
 * main - prints alphabets (lowercase and uppercase)
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
		putchar(letter[x]);
	putchar('\n');

	return (0);
}
