#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concentrates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy to s1
 * Return: NULL if error or char pointer to the newly joined place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;
	char *d;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; x++)
			;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; y++)
			;
	}
	if (y > n)
		y = n;
	d = malloc(sizeof(char) * (x + y + 1));
	if (d == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		d[z] = s1[z];
	for (z = 0; z < y; z++)
		d[z + x] = s2[z];
	d[x + y] = '\0';
	return (d);
}
