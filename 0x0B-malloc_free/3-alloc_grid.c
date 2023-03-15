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
int **p;
int i;
p = malloc(width * sizeof(*p));
for (i = 0; i < width; i++)
{
p[i] = malloc(height * sizeof(p));
}
return (p);
if (width <= 0 || height <= 0)
{
return (NULL);
}
else if (p == 0)
{
return (NULL);
}
}
