#include "main.h"
/**
 * _abs - function
 * @x: single letter input
 * Return: int
 */
int _abs(int x)
{

	if (x >= 0)
	{
		return (x);
	}
	else
	{
		x = -x;
		return (x);
	}
}
