#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
