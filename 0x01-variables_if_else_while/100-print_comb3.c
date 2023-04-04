#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1 ; j <= 9 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
		if (i == 8 && j == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
