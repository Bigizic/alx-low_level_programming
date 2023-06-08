## 0-hash_table_create.c:

Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);

where size is the size of the array

Returns a pointer to the newly created hash table

If something went wrong, your function should return NULL


	julien@ubuntu:~/0x1A. Hash tables$ cat 0-main.c 
	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "hash_tables.h"
	
	/**
	 * main - check the code for
	 *
	 * Return: Always EXIT_SUCCESS.
	 */
	int main(void)
	{
	    hash_table_t *ht;
	
	    ht = hash_table_create(1024);
	    printf("%p\n", (void *)ht);
	    return (EXIT_SUCCESS);
	}
	julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
	julien@ubuntu:~/0x1A. Hash tables$ ./a 
	0x238a010
	julien@ubuntu:~/0x1A. Hash tables$ valgrind ./a
	==7602== Memcheck, a memory error detector
	==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
	==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
	==7602== Command: ./a
	==7602== 
	0x51fc040
	==7602== 
	==7602== HEAP SUMMARY:
	==7602==     in use at exit: 8,208 bytes in 2 blocks
	==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
	==7602== 
	==7602== LEAK SUMMARY:
	==7602==    definitely lost: 16 bytes in 1 blocks
	==7602==    indirectly lost: 8,192 bytes in 1 blocks
	==7602==      possibly lost: 0 bytes in 0 blocks
	==7602==    still reachable: 0 bytes in 0 blocks
	==7602==         suppressed: 0 bytes in 0 blocks
	==7602== Rerun with --leak-check=full to see details of leaked memory
	==7602== 
	==7602== For counts of detected and suppressed errors, rerun with: -v
	==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
	julien@ubuntu:~/0x1A. Hash tables$

-----------------------------------------------------------------------------------------------------------------------------------------------------


## 1-djb2.c:

Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);

You are allowed to copy and paste the function from this page


	julien@ubuntu:~/0x1A. Hash tables$ cat 1-djb2.c 
	unsigned long int hash_djb2(const unsigned char *str)
	{
	    unsigned long int hash;
	    int c;
	
	    hash = 5381;
	    while ((c = *str++))
	    {
	        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
		    }
	    return (hash);
	}
	julien@ubuntu:~/0x1A. Hash tables$ 
		julien@ubuntu:~/0x1A. Hash tables$ cat 1-main.c 
	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "hash_tables.h"
		
	/**
	 * main - check the code
	 *
	 * Return: Always EXIT_SUCCESS.
	 */
	int main(void)
	{
	    char *s;
	
	    s = "cisfun";
	    printf("%lu\n", hash_djb2((unsigned char *)s));
	    s = "Don't forget to tweet today";
	    printf("%lu\n", hash_djb2((unsigned char *)s));
	    s = "98";
	    printf("%lu\n", hash_djb2((unsigned char *)s));
	    return (EXIT_SUCCESS);
	}
	julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
	julien@ubuntu:~/0x1A. Hash tables$ ./b 
	6953392314605
	3749890792216096085
	5861846
	julien@ubuntu:~/0x1A. Hash tables$ 
