#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * @ac: argument count
 * @av: vector
 * Return: ...
 */
int main(int ac, char **av)
{
	int (*optr)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	optr = get_op_func(av[2]);

	if (!optr)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", optr(atoi(av[1]), atoi(av[3])));
	return (0);
}	
