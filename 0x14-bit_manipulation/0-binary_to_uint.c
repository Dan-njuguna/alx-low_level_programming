#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted number, or 0 if:-
 * 1. there is one or more chars in the string
 * b that is not 0 or 1
 * 2. b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int len, base_two;

	if (!b)
		return (0);

	x = 0;
	/* Loop through the length of string */
	for (len = 0; b[len] != '\0'; len++)
		;
	/*Reverse through the length of the string and multiply each one by 2*/
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		/*Check if all characters in b are '0' and '1'*/
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		/*check if any bit is '1'*/
		if (b[len] & 1)
		{
			x += base_two;
		}
	}

	return (x);
}
