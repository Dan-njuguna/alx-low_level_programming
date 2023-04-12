#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strdup - returns pointer to new string which is
 * duplicate to string str
 * @str: string to be duplicated, pointer to character
 * Return: NUll if insuffecient memory, on success return a pointer
 * to duplicate string
 */
char *_strdup(char *str)
{
	char *n_str;

	n_str = strdup(str);
	if (str == NULL)
		return (NULL);
	n_str = malloc(strlen(str) + 1);
	if (n_str == NULL)
		return (NULL);
	return (n_str);
}
