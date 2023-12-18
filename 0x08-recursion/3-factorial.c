#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: Integer input
 * Return: -1 if n < 0, 1 if n == 1, factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
