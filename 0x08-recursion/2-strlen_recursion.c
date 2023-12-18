#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: String to return to
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
