#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns 1 if a string
 * is a palindrome and 0 if not
 * @s: empty string
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int m, n;

	if (length == 0)
		return (1);
	for (m = 0, n = length - 1; m < n; m++, n--)
	{
		if (s[m] != s[n])
			return (0);
	}
	return (1);
}
