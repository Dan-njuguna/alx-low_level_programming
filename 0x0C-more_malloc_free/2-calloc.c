#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size of memory
 * Return: NULL if fail, pointer to memory address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	c = malloc(j);
	if (c == NULL)
		return (NULL);
	while (i < j)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
