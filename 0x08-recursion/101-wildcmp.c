#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @x: String to compare to
 * @y: String with wild character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *x, char *y)
{
	if (*x == '\0' && *y == '\0')
		return (1);

	if (*x == *y)
		return (wildcmp(x + 1, y + 1));

	if (*y == '*')
	{
		if (*y == '*' && *(y + 1) != '\0' && *x == '\0')
			return (0);
		if (wildcmp(x, y + 1) || wildcmp(x + 1, y))
			return (1);
	}

	return (0);
}
