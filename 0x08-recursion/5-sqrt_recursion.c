#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer input value
 * Return: -1 if doesn't have natural sqrt, natural sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - recurses to find natural
 * sqrt of n
 * @n: Number to get sqrt of
 * @i: Iteration
 * Return: the resulting sqrt
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
