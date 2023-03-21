#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*header*/

/**
* init_dog - initializes a variable of type struct dog ..
* @name: char type ..
* @age: float type ..
* @owner: char type ..
* @d: pointer to my_dog ..
* Return: 0 if success ..
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
