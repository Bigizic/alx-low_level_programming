#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/*header*/

/**
* new_dog - creates a new dog ..
* @name: char type ..
* @age: float type ..
* @owner: char type ..
* Return: 0 if success ..
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
int i,j,k,l;
i = 0;
j = 0;
new = malloc(sizeof(dog_t));
if (new == NULL)

return (NULL);

if (name != NULL)
while (name[i] != '\0')
i += 1;
if (owner != NULL)
while (owner[j] != '\0')
j += 1;
new->name = malloc(i * sizeof(char) + 1);
if (new->name == NULL)
{
free(new);
return (NULL);
}
new->owner = malloc(j * sizeof(char) + 1);
if (new->owner == NULL)
{
free(new->name);
free(new);
return (NULL);
}
for (k = 0; k < i; k += 1)
new->name[k] = name[k];
for (l = 0; l < j; l += 1)
new->owner[l] = owner[l];
new->name[k] = '\0';
new->owner[l] = '\0';
new->age = age;
return (new);
}
