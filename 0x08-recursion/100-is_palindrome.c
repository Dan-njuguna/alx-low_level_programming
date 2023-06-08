#include "main.h"
/**
 * _strlen - returns length of string
 * @s: String
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * compare - compares each character of string
 * @s: string
 * @n1: smaller iterator
 * @n2: largest iterator
 * Return: .
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen(s) - 1));
}
