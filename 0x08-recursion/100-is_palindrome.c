#include "main.h"

/**
 * palind - obtains length of char a
 * @a: string character
 * @l: integer to count string length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind(a + 1, l + 1));
}
/**
 * palind1 - compares string vs string reverse
 * @a: string character
 * @l: string length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind1(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind1(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind(s, 0);
	return (palind1(s, l));
}
