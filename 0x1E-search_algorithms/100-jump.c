#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in a sorted]
 * array of integers using the jump search algorithm
 *
 * @array: (int) array containing elements to be searched
 *
 * @size: (size_t) size of array
 *
 * @value: (int) element to find in the array
 *
 * Return: index of value otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
