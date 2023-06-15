#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: Minimum size
 * @max: maximum size
 * Return: NULL if min > max or when malloc fails, pointer to int
 */
int *array_range(int min, int max)
{
	int *i, j = 0;

	if (min > max)
		return (NULL);
	i = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (i == NULL)
		return (NULL);
	while (min <= max)
	{
		i[j] = min;
		j++;
		min++;
	}
	return (i);
}
