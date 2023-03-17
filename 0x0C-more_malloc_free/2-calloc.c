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
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i += 1)
*(p + i) = 0;
return (p);
}
