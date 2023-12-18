#include "main.h"
/**
 * _isalpha - function
 * @c: single letter input
 * Return: int
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
