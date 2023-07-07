#include "main.h"
/**
 * binary_to_uint - converts a binary
 * number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted number, or 0 if:-
 * 1. there is one or more chars in the string
 * b that is not 0 or 1
 * 2. b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (!b)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b < '0' || *b > '1')
		{
			return (0);
		}
		n = (n << 1) + (*b - '0');
		b++;
	}
	return (n);
}
