#include "main.h"
#include <stdio.h>
/*header*/

/**
* print_array - prints n elements of an array of integers ..
* @a: int type .
* @n: int type ..
* Return: 0 if success ..
*/

void print_array(int *a, int n)
{
int w;

for (w = 0; w < n; w++)
{
if (w != n - 1)
{
printf("%d , ", a[w]);
}
else
{
printf("%d , ", a[w]);
}
}
printf("\n");
}
