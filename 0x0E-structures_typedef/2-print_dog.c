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
if (d == NULL)
{
return;
}
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
if (isnan(d->age))
{
printf("nil\n");
}
else
{
printf("Age : %.2f\n", d->age);
}
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
return;
}
