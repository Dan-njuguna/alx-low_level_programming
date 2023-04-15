#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for array using malloc
 * @nmemb: array to be allocated memory
 * @size: number of bytes  to be allocated
 * Return: to pointer of allocated memory if success, or NULL if calloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int d;
	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (d = 0; d < (nmemb * size); d++)
		n[d] = 0;
	return (n);
}
