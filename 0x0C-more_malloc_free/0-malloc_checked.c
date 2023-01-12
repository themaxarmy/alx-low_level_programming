#include <stdlib.h>
#include <stdio>
#include "main.h"

/**
 * *malloc_cheched - allocates mem using malloc
 * @b: number of bytes to be allocated
 *
 * Return: pointer to allocated mem
 **/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
