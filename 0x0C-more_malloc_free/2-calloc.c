#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*header*/

/**
* *_calloc - allocates memory for an array, using malloc ..
* @nmemb: int type ..
* @size: int type ..
* Return: 0 if success ..
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

if (nmemb || size == 0)
{
return (NULL);
}
void *p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
memset(p, 0, nmemb * size);
return (p);
}
