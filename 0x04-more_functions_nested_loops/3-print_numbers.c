#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: void
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
