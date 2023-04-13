#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_palindrome - checks if string is a palindmore
 * @s: the string to check
 * Return: return 1 if s is palindmore, 0 otherwise
 */
int is_palindrome(char *s)
{
	int d, len = strlen(s);

	for (d = 0; d < len / 2; d++)
		if (s[d] != s[len - d - 1])
			return (0);
	return (1);
}
