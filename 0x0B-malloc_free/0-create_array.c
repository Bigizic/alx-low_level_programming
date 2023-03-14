#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*header*/

/**
* *create_array - creates an array of chars and initializes it with a specific char..
* @size: int type ..
* @c: char type ..
* Return: 0 if success..
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;

char *s;
s = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}

