#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: Pointer to char
 * @accept: points number of bytes
 * Return: number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int u;
	int x;

	u = 0;
	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				u++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (u);
			}
		}
		s++;
	}
	return (u);
}
