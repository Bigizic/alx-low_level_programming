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
    int new_array[] = {
	0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610
    };
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]), s;

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n\n", 999, jump_search(array, size, 999));
    printf("Found %d at index: %d\n\n", 9, jump_search(array, size, 9));
    printf("Found %d at index: %d\n\n", 0, jump_search(array, size, 0));
    printf("Found %d at index: %d\n\n", 2, jump_search(array, size, 2));

    s = sizeof(new_array) / sizeof(new_array[0]);
    printf("Found %d at index: %d\n\n", 89, jump_search(new_array, s, 89));
    printf("Found %d at index: %d\n\n", 144, jump_search(new_array, s, 144));
    printf("Found %d at index: %d\n\n", 22, jump_search(new_array, s, 22));
    printf("Found %d at index: %d\n\n", 21, jump_search(new_array, s, 21));
    printf("Found %d at index: %d\n\n", 610, jump_search(new_array, s, 610));
    printf("Found %d at index: %d\n\n", 55, jump_search(new_array, s, 55));
    return (EXIT_SUCCESS);
}
