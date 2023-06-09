#include "main.h"
#include <stdio.h>
/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: Integer value
 * Return: void
 */
void print_times_table(int n)
{
	int column, row, multiple;

	for (row = 0; row <= 15; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 0; column <= 15; column++)
		{
			multiple = row * column;
			if ((multiple / 10) > 0)
			{
				_putchar((multiple / 10) + '0');
			}
			else if (n > 15 || n < 0)
			{
				_putchar(' ');
			}
			else if ((multiple / 10) < 15)
			{
				_putchar(' ');
			}
			_putchar((column % 10) + '0');
			if (column <= 15)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
