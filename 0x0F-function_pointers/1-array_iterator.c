#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array of functions
 * @size: ...
 * @action: ...
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
