#include <stdio.h>
/*Header*/
/**
* main - entry block
* @void: no argument
* Return: 0
**/
int main(void)
{
char c;

for (c = 'z' ; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
