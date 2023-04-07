#include "main.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"
/**
 * _pow_recursion - computes the value of x raised to power y
 * @x: Base integer
 * @y: Index integer
 * Return: Integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		--y;
	return (x * _pow_recursion(x, y));
}
