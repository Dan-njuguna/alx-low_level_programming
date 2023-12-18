#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal.
 * @n: Integer value
 * Return: void
 */
void print_line(int n)
{	
	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		putchar('_');
	}
	putchar('\n');
}
