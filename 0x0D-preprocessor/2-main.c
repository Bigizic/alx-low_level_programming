#include <stdio.h>
/*header*/

/**
* main - prints the name of the file it was compiled from ..
* Return: 0 if success ..
*/

int main(void)
{
char *s = __FILE__;
while (*s != '\0')
{
putchar (*s);
s++;
}
putchar ('\n');
return (0);
}
