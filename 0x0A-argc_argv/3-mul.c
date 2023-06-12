#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: integer value
 * @argv: integer value
 * Return: 0 if success, 1 when error
 */
int main(int argc, char **argv)
{
	int mul, m, n;

	if (argc == 3)
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		mul = m * n;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
