#include <stdio.h>
#include <stdlib.h>
/**
 * print_int_array - prints an array of integers
 * @a: integer to allocate memory
 * @size: size of memory to be allocated
 * Return: void
 */
void print_int_array(int *a, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
/**
 * main - calls print_int_array function
 * @ac: Argument count
 * @av: Argument vector
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int *a;
	int asize;
	int i;

	if (ac < 2)
	{
		printf("Please give me at least one number\n");
		printf("Usage: %s number[NUMBER]\n", av[0]);
		return (0);
	}
	asize = ac - 1;
	a = malloc(sizeof(int) * asize);
	i = 0;
	while (i < asize)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	print_int_array(a, asize);
	return (0);
}
