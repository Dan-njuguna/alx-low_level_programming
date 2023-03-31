#include "main.h"
/**
 * _strcat - concentrates two strings
 * @dest: input value
 * @src: input value
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
