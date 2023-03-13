#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*header*/

/**
* main - prints minimum number of coins to make change for an amount ..
* @argc: int type ..
* @argv: char type ..
* Return: 0 if success ..
*/

int main(int argc, char *argv[])
{
int cent, i;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
i = 0;
while (cent > 0)
{
if (cent >= 25)
{
cent -= 25;
i += 1;
}
else if (cent >= 10)
{
cent -= 10;
i += 1;
}
else if (cent >= 5)
{
cent -= 5;
i += 1;
}
else if (cent >= 2)
{
cent -= 2;
i += 1;
}
else
{
cent -= 1;
i += 1;
}
}
printf("%d\n", i);
return (0);
}
