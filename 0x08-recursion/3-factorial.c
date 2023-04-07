#include "main.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"
/**
 * factorial - multiplies a number by every number below it
 * @n: integer
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
