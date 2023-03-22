#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/*header*/

/**
* int_index - searches for an integer ..
* @array: int type ..
* @size: int type ..
* @cmp: pointer function ..
* Return: 0 if success ..
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
