#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts String to int method
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
	int i, j, tn2, ng, f;
	unsigned int tn;

	tn = 0;
	i = 1;
	ng = 1;
	f = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if ((s[j] >= 48) && (s[j] <= 57))
		{
			tn = tn * 10 + (s[j] - '0');
			f = 1;
		}
		else if (s[j] == 45)
		{
			ng = ng * -1;
		}
		else if (f == 1)
		{
			break;
		}
	}
	tn2 = tn * ng;
	return (tn2);
}
