#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, cnt, lmt, upp, lwr;
	char s;

	cnt = 0;
	lmt = 2772;
	lwr = 32;
	upp = 126;
	while ((lmt - cnt) > 0)
	{
		srand(time(0) + cnt);
		n = (rand() % (upp - lwr + 1)) + lwr;
		if ((cnt + n) <= lmt)
		{
			s = n;
			printf("%c", s);
			cnt = cnt + n;
		}
		else
		{
			break;
		}
	}
	if ((lmt - cnt) > 0)
	{
		n = lmt - cnt;
		s = n;
		printf("%c", s);
	}
	return (0);
}
