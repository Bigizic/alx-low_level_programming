#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*header*/

/**
* main - adds positive numbers ..
* @argc: int type ..
* @argv: char type ..
* Return: 0 if success ..
*/

int main(int argc, char *argv[])
{
int i, j;
int k = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
k += atoi(argv[i]);
}
printf("%d\n", k);
return (0);
}
