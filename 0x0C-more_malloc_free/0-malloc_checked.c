#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocated in memory
 * Return: pointer to allocated memory, termination with status value 98
 */
void *malloc_checked(unsigned int b)
{
	int *dan;

	dan = malloc(b);
	if (dan == NULL)
		exit(98);
	return (dan);
}
