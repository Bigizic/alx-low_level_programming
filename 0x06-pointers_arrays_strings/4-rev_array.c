#include "main.h"
#include <stdio.h>
/**headers*/

/**
* reverse_array - reverses the contents of an array of intergers ..
* @a: int type ..
* @n: int type ..
* Return: void ..
*/

void reverse_array(int *a, int n)
{
int b;
int i;
int j = n - 1;

for (i = 0; i < j; i++, j--)
{
b = a[i];
a[i] = a[j];
a[j] = b;
}
}




