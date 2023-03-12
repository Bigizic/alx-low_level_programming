#include "main.h"
#include <stdio.h>
/*header*/

/**
* main - prints the number of arguments passed into it ..
* @argc: int type..
* @argv: char type ..
* Return: 0 if success ..
*/

int main(int argc, char *argv[])
{
int i;
i = argc - 1;
if (argv)
printf("%d\n", i);
return (0);
}
