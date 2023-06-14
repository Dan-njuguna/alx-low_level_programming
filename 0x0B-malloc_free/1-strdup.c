#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to newly allocated space in memory,
 * duplicate of the string str
 * @str: String to be copied
 * Return:  NULL if str = NULL, pointer to duplicate string if success
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, k = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[k])
	{
		k++;
	}
	s = malloc((sizeof(char) * k) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < k)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
