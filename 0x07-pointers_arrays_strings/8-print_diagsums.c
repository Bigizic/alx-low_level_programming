#include "main.h"
#include <stdio.h>
/*header*/

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
* @a: int type ..
* @size: int type ..
* Return: 0 if success .. 
*/

void print_diagsums(int *a, int size)
{
int i;
int j;
int sum0 = 0;
int sum1 = 0;

for (i = 0; i < size * size; i += (size + 1))
{
sum0 += a[i];
}
for (j = size - 1; j < size * size - (size - 1); j += (size - 1))
{
sum1 += a[j];
}
printf("%d, %d\n", sum0, sum1);
}
