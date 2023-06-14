#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character for initialization
 * Return: NULL if size is 0, a pointer to
 * the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *d;

	d = malloc(sizeof(char) * size);
	if (size == 0 || d == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		d[m] = c;
	}
	return (d);
}
