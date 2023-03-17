#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*header*/

/**
* *array_range - creates an array of integers ..
* @min: int type ..
* @max: int type ..
* Return: 0 if success ..
*/

int *array_range(int min, int max)
{
int *p;
int o;
int i;
if (min > max)
{
return (NULL);
}
o = max - min + 1;
p = (int *)malloc(o * sizeof(*p));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < o; i++)
{
p[i] = min + i;
}
return (p);
}
