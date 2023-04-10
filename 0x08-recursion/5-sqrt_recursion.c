#include "main.h"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"
/**
 * sqrt_rule - function rule sqrt
 * @n: number
 * @x: multiple of number
 * Return: integer
 */
int sqrt_rule(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_rule(n, x + 1));
	}
}
/**
 * _sqrt_recursion - sqrt function
 * @n: integer number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_rule(n, 1));
	}


}
