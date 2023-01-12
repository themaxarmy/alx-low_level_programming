#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_cheched - allocates mem using malloc
 * @b: number of bytes to be allocated
 *
 * Return: pointer to allocated mem
 **/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
