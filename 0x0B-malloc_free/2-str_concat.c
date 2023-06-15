#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: NULL on failure, point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0, l;
	char *s;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	l =  i + j;
	s = malloc((sizeof(char) * (i + j) + 1));
	j = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
