#include "main.h"
#include <stdio.h>
/*header*/

/**
* _puts - prints a string followed by a new line ..
* @str: char type ..
* Return: 0 if success ..
*/

void _puts(char *str)
{

int i;
for (i = 0; *(str + i) != '\0'; i++)
putchar(*(str + i ));
putchar('\n')
}
