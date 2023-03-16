#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*header*/

/**
* *malloc_checked - allocates memory using malloc ..
* @b: int type ..
* Return: 0 if success ..
*/

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (!p)
{
exit(98);
}
return (p);
}
