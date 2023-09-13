#include "search_algos.h"
#include <stdbool.h>
/* header */

int temp_binary_search(int *array, int tab, int size, int value);
void print_stuff(int *array, int mid, int pow, int right);

/**
 */

int temp_binary_search(int *array, int tab, int size, int value)
{
	int mid, l, r, i, count = 0, t;

	l = 0;
	r = size - 1;

	for (i = 1; i <= tab / 2; i*=2)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", tab/2, count);
			for (t = 0; t < count; t++)
				printf("Searching in array: \n");
			return (mid);
		}
		count++;
	}
	printf("Value found between indexes [%d] and [%d]\n", tab/2, mid);
	print_stuff(array, count, i, mid);
	return (-1);
}

void print_stuff(int *array, int mid, int pow, int right)
{
	int i;

	(void) pow;
	(void) array;
	(void) right;

	for (i = 0; i < mid; i++)
	{
		if (i <= pow/mid)
			printf("Searching in array: \n");
	}
	/*printf("%d\n", right);*/

}

int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
		i = i*2;
	return (temp_binary_search(array, i, size, value));
}
