#include "search_algos.h"
#include <stdbool.h>
/* header */

int temp_binary_search(int *array, int tab, int size, int value);

/**
 * temp_binary_search - function that uses binary seach algorithm
 * with few tweaks added
 *
 * @array: pointer to array containing sorted elements
 *
 * @tab: keps tab on the power of 2 range
 *
 * @size: size of array
 *
 * @value: target to find
 *
 * Return: index of value otherwise -1
 */

int temp_binary_search(int *array, int tab, int size, int value)
{
	int mid, l, r;

	l = tab / 2;
	if (tab == size)
		tab -= 1;
	else
		tab = tab;
	r = tab;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (mid = l; mid < r; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}


/**
 * exponential_search - a function that searches for a value in a
 * sorted array of integers using the exponential search algorithm
 *
 * @array: pointer to sorted array of integers
 *
 * @size: size of array
 *
 * @value: target to find
 *
 * Return: index of target otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, j, count = 0;
	int res;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
		i = i * 2;
	while (count < size)
		count++;
	for (j = 1; j <= i / 2; j *= 2)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	if (count == i)
		count -= 1;
	else
		count = i;
	printf("Value found between indexes [%ld] and [%lu]\n", i / 2, count);
	res = temp_binary_search(array, i, size, value);
	return (res);
}
