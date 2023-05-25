#include "main.h"
/**
 * positive_or_negative - checks if the number is positive,negative or zero
 * @i: int value to be determined
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive \n", i);
	else if (i < 0)
		printf("%d is negative \n", i);
	else
		printf("%d is zero \n", i);
}
