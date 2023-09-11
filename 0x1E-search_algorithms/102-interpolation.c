#include "search_algos.h"
/* header */

int interpolation_helper(int *array, int l, int h, int value, size_t p);
void print_value(int *array, int pos);

/**
 * interpolation_search - implementation of the interpolation
 * search algorithm
 *
 * @array: pointer to array to be searched
 *
 * @size: size of array
 *
 * @value: target to look for
 *
 * Return: the first index where value is located otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l, h;
	size_t pos;

	if (array == NULL || size < 2)
		return (-1);
	l = 0;
	h = size - 1;
	pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
	return (interpolation_helper(array, l, h, value, pos));
}


/**
 * interpolation_helper - helper function
 *
 * @array: pointer to array to search
 *
 * @l: (int) low, keep tabs on the low position
 *
 * @h: (int) high, keep tabs on the highest position
 *
 * @value: target to look for
 *
 * @p: original position
 *
 * Return: the first index where value is located otherwise -1
 */
int interpolation_helper(int *array, int l, int h, int value, size_t p)
{
	size_t pos;

	if (l <= h && value >= array[l] && value <= array[h])
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		print_value(array, pos);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			return (interpolation_helper(array, pos + 1, h, value, p));
		if (array[pos] > value)
			return (interpolation_helper(array, l, pos - 1, value, p));
	}
	printf("Value checked array[%lu] is out of range\n", p);
	return (-1);
}


/**
 * print_value - prints the value in the array everytime the array is
 * being compared to the value being searched for
 *
 * @array: pointer to array
 *
 * @pos: position from helper function that keeps tab on the number
 * of times the array has been searched
 *
 * Return: void
 */
void print_value(int *array, int pos)
{
	int i;

	for (i = pos; i <= pos; i++)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
}
