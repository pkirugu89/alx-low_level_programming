#include "main.h"
#include <stdlib.h>

/**
 * argstostr - conacatenates all the arguments in the program
 * @ac: argument count in main
 * @av: arguments passed to main
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int v, w, x, y, z;

	if (ac == 0 || av == NULL)
		return (0);
	v = 0, z = 0;
	for (x = 0; x < ac; x++)
	{
		w = 0;
		while (av[x][w])
			w++;
		v += w + 1;
	}
	s = malloc((v + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (y = 0; y < ac; y++)
	{
		w = 0;
		while (av[y][w])
		{
			*(s + z) = av[y][w];
			z++;
			w++;
		}
		*(s + z) = '\n';
		z++;
	}
	*(s + z) = '\0';

	return (s);
}
