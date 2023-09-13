#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int arr[] = {
	10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47
    };
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int array[] = {
        0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
    printf("Found %d at index: %d\n\n", 999, interpolation_search(array, size, 999));
    printf("Found %d at index: %d\n\n", 18, interpolation_search(arr, n, 18));
    return (EXIT_SUCCESS);
}
