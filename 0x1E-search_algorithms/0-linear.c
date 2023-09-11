#include "search_algos.h"
/* header */

/**
 * linear_search - a function that perfroms a linear search given a list
 *
 * @array: (int) pointer to aray to be searched, contains integers
 *
 * @size: (size_t) size of array
 *
 * @value: (int) value to find in array
 *
 * Return: index of value if found otherwise return -1
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
