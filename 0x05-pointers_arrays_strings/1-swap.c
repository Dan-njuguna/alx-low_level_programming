#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer being swapped
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
