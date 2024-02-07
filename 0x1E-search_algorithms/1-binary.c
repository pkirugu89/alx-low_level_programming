#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the array elements within a given range.
 * @array: Pointer to the 1st array element.
 * @start: Index of the 1st element to print.
 * @end: Index of the last element to print.
 */
 void print_array(int *arrayz, size_t start, size_t end)
{
	size_t x;

	for (x = start; x <= end; x++)
	{
		printf("%d", arrayz[x]);
		if (x < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in sorted int array
 *                 using the Binary Search algorithm.
 * @array: Pointer to the 1st array element to search.
 * @size: Number of array elements.
 * @value: Value to search for.
 *
 * Return: The index where value is located,
 *         or -1 if value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
