#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary representation
 * @n: long unsigned iny
 * Retunr: Nothing
 */
void print_binary(unsigned long int n)
{
	int len, buf = 0;
	unsigned long int current;

	for (len = 63; len >= 0; len--)
	{
		current = n >> len;

		if (current & 1)
		{
			putchar('1');
			buf++;
		}
		else if (buf)
		{
			putchar('0');
		}
	}
	if (!buf)
		putchar('0');
}
