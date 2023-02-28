#include "main.h"
#include <stdio.h>
/*header*/

/**
* _strlen - prints every character of a string starting with the first line ..
* @s: char type ..
* Return: length of a string if success ..
*/

int _strlen(char *s)
{
int l, i = 0;

while (s[i] != '\0')
{
i++;
}
l = i;
return (l);
}


/**
* puts2 - prints one char out of 2 of a string ..
* @str: char type ..
* Return: nothing .
*/

void puts2(char *str)
{
int i;
int size = _strlen(str);

for (i = 0; i < size; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
