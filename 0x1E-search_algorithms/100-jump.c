#include "search_algos.h"
#include <math.h>
#include <stdbool.h>
/* headers */

/**
 * right - calculates the forward jump/right jump function
 *
 * @array: pointer to array
 *
 * @size: size of array
 *
 * @value: target
 *
 * @sq: square root of the array
 *
 * Return: right jump
 */
int right(int *array, int size, int value, int sq)
{
	int i;

	for (i = sq; i < size; i += sq)
	{
		if (array[i] >= value)
			return (i);
	}
	return (i);
}

/**
 * left - calculates the left jump/left jump funtion
 *
 * @array: pointer to array
 *
 * @size: size of the array
 *
 * @value: target
 *
 * @sq: square root of the array
 *
 * Return: left jump
 */
int left(int *array, int size, int value, int sq)
{
	int i;

	for (i = 0; i < size; i += sq)
	{
		if (array[i] >= value)
			return (i - sq);
	}
	return (i - sq);
}

/**
 * print_vals - prints extra checks
 *
 * @i: pointer to left jump tab
 *
 * @tmp: target found
 *
 * @array: pointer to sorted array
 *
 * Return: void
 */
void print_vals(int i, int tmp, int *array)
{
	int t;

	if (tmp > 0)
	{
		for (t = i; t <= tmp; t++)
			printf("Value checked array[%d] = [%d]\n", t, array[t]);
	}
}

/**
 * jump_search - a function that searches for a value in a sorted
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
	int j, i, sq, jump, tmp = -1;
	char *word;

	if (array == NULL || size < 2)
		return (-1);
	sq = sqrt(size);
	word = "Value found between indexes ";
	(void) word;
	i = left(array, size, value, sq);
	j = right(array, size, value, sq);

	for (jump = 0; jump <= j; jump++)
	{
		if (array[jump] == value)
			tmp = jump;
	}
	if (tmp < 0)
	{
		for (jump = 0; jump < j; jump += sq)
		{
			printf("Value checked array[%d] = [%d]\n",
					jump, array[jump]);
			if (jump == i)
				printf("%s[%d] and [%d]\n", word, i, j);
		}
		printf("Value checked array[%d] = [%d]\n",
				i, array[i]);
	}
	else
	{
		for (jump = 0; jump < j; jump += sq)
		{
			printf("Value checked array[%d] = [%d]\n",
					jump, array[jump]);
			if (jump == i)
				printf("%s[%d] and [%d]\n", word, i, j);
		}
		print_vals(i, tmp, array);
	}
	return (tmp);
}
