#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/*header*/

/**
* free_dog - frees dog ..
* @d: pointer to dog_t ..
* dog_t: structure type ..
* Return: 0 if success .
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
