#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concentrates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: pointer to the concentrated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	s = malloc(len1 + len2 + 1);
	if (s == NULL)
		return (NULL);
	memcpy(s, s1, len1);
	memcpy(s + len1, s2, len2 + 1);
	return (s);
}
