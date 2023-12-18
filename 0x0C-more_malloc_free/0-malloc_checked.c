#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to allocate
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *v;

	v = malloc(b);
	if (v == NULL)
		exit(98);
	return (v);
}
