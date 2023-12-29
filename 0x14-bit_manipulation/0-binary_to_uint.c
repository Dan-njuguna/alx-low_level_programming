#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: Argument to work on.
 * Return: No. converted,
 * 	0 if one or more chars in b is not 0 or 1
 * 	0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int mul, len;

	if (!b)
		return (0);

	res = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, mul = 1; len >= 0; len--, mul *= 2)
	{
		if (b[len] != '0' || b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			res += mul;
		}
	}

	return (res);
}
