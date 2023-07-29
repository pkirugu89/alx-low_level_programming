#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _wcount - counts the number of words
 * @stw: string
 *
 * Return: int
 */
int _wcount(char *stw)
{
	int l, wc;

	l = 0, wc = 0;
	if (*(stw + l) == ' ')
		l++;
	while (*(stw + l))
	{
		if (*(stw + l) == ' ' && *(stw + l - 1) != ' ')
			wc++;
		if (*(stw + l) != ' '  && *(stw + l + 1) == 0)
			wc++;
		l++;
	}
	return (wc);
}
/**
 * _trspace - Moves the address to remove trailig whitespaces
 * @sti: string
 *
 * Return: Pointer
 */
char *_trspace(char *sti)
{
	while (*sti == ' ')
		sti++;
	return (sti);
}
/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: Double Pointer
 */
char **strtow(char *str)
{
	char **s, *ts;
	int l, l2, wc, i, j, fr, k;

	if (str == NULL || *str == 0)
		return (0);
	fr = 0;
	wc = _wcount(str);
	if (wc == 0)
		return (0);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	ts = _trspace(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (*(ts + l) != ' ' && *(ts + l) != 0)
			l++;
		s[i] = malloc((l + 1) * sizeof(char));
		if (s[i] == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0, l2 = 0; l2 < l; l2++, j++)
			s[i][j] = *(ts + l2);
		s[i][j] = '\0';
		ts = _trspace(ts + l);
	}
	s[i] = NULL;
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
			free(s[k]);
		free(s);
	}
	return (s);
}
