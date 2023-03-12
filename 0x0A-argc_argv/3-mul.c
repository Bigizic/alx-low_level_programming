#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*header*/

/**
* main - multiplies two numbers ..
* @argc: int type ..
* @argv: char type ..
* Return: 0 if success ..
*/

int main(int argc, char *argv[])
{
int i;
int j = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
j *= atoi(argv[i]);
printf("%d\n", j);
return (0);
}
