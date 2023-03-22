#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/*header*/

/**
* array_iterator - executes a function given as a parameter ..
* @array: int type ..
* @action: void pointer ..
* @size: size_t type ..
* Return: 0 if success .
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
if (size <= 0)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}

}
