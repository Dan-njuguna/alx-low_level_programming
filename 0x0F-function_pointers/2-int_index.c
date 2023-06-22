#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to locate integer
 * @size: size of array
 * @cmp: pointer to funtion that compares values
 * Return: first element of function, -1 if no match
 * -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
