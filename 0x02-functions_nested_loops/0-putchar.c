#include "main.h"
/**
* main - Print "_putchar" followed by a new line.
* Return: 0
*/

int main(void)
{
char ink[]  = "_putchar";
int i = 0;
while (ink[i] != '\0')
{
_putchar(ink[i]);
i++;
}
_putchar('\n');

return (0);
}
