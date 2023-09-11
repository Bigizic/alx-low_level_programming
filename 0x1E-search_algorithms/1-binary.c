#include "search_algos.h"
/* header */



/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: (int) pointer to aray to be searched, contains integers
 *
 * @size: (size_t) size of array
 *
 * @value: (int) value to find in array
 *
 * Return: index of value if found otherwise return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int middle, left, right;

	if (array == NULL || size < 2)
		return (-1);
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (middle = left; middle < right; middle++)
			printf("%d, ", array[middle]);
		printf("%d\n", array[middle]);

		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
