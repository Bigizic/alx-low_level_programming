#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "dog.h"
/*header */

/**
* print_dog - prints a struct dog ..
* @d: pointer to my_dog ..
* Return: 0 if success ..
*/

void print_dog(struct dog *d)
{
if (d)
{
d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
printf("Age: %f\n", d->age);
d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
}
}
