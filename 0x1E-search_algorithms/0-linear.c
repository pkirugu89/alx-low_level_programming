#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an int array
 *                 using linear search algorithm.
 * @array: Pointer to the first array element to search.
 * @size: Number of array elements.
 * @value: Value of search for.
 *
 * Return: The 1st index where value is located,
 *         or -1 if value isn't present in array or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
