#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*header*/

/**
* **alloc_grid - returns a pointer to a 2 dimensional array ..
* @width: int type ..
* @height: int type  ..
* Return: 0 if success ..
*/

int **alloc_grid(int width, int height)
{
int i;
int j;
int **p;

if (width <= 0 || height <= 0)
{
return (NULL);
}
p = (int **)malloc(height * sizeof(int *));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
p[i] = (int *)malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(p[j]);
}
free(p);
return (NULL);
}
}
return (p);
}
