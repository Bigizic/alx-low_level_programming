#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/*header*/

/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: void pointer
* @old_size: unsigned int type
* @new_size: unsigned int type
* Return: 0 if success
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
if (!ptr)
{
	return (malloc(new_size));
}
if (new_size == old_size)
{
	return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr)
{
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
}
return (new_ptr);
}
