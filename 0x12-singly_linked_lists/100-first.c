#include <stdio.h>
#include <stdlib.h>
/* header */

/**
* __attribute__ - tells compiler to execute code before main
* Return: 0 if success
*/

void __attribute__((constructor)) before_main()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
