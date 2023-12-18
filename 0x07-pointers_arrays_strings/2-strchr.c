#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: Pointed location
 * @c: Input value
 * Return: pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
