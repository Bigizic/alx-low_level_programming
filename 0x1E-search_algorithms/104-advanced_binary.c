#include "search_algos.h"
/* header */

int helper(int *array, int l, int r, int value);

/**
 * advanced_binary - a function that searches for a value in a
 * sorted list of integers using the binary search algorithm but
 * in an advanced way using recursion and one loop
 *
 * @array: array of sorted integers
 *
 * @size: size of array
 *
 * @value: target to find
 *
 * Return: index where value is located otherwise -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (helper(array, 0, size - 1, value));
}


/**
 * helper - helper functiono for advanced binary search
 *
 * @array: pointer to array of sorted integers
 *
 * @l: keeps tab on left position/left tab
 *
 * @r: keeps tab on right position/right tab
 *
 * @value: target to find
 *
 * Return: index to value otherwise -1
 */
int helper(int *array, int l, int r, int value)
{
	int mid, i;

	if (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}
	if (l <= r)
	{
		mid = (l + r) / 2;

		if (array[mid] == value && l == mid)
			return (mid);
		if (array[mid] < value)
			return (helper(array, mid + 1, r, value));
		else if (array[mid] > value)
			return (helper(array, l, mid, value));
		/*else if (array[mid] == value && l == mid)*/
			/*return (mid);*/
		else
			return (helper(array, l, mid, value));
			/*printf("%d, %d, %d\n", l, r, mid);*/
	}
	return (-1);
}
