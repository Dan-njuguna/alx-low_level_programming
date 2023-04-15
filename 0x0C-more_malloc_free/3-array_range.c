#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers ordered
 *               from min to max.
 * @min: The first array value
 * @max: The last value
 *
 * Return: Null If min > max or error, else
 *         a pointer to the new array
 */

int *array_range(int min, int max)
{
	int n;
	int len;
	int *d;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	d = malloc(sizeof(int) * len);

	if (d == NULL)
		return (NULL);

	for (n = 0; n < len; n++, min++)
	{
		d[n] = min;
	}

	return (d);
}
