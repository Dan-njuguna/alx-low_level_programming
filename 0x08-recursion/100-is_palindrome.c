#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _is_palindrome_recursive - Helper function that recursively checks if
 * a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if string is a palindmore
 * @s: the string to check
 * Return: return 1 if s is palindmore, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (_is_palindrome_recursive(s, 0, len - 1));
}
