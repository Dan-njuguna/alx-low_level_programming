#include <stdio.h>
/**
 * main - Entry
 * @argc: counts command line input
 * @argv: stores memory address of argc
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		printf("%d\n", argc);
		return (0);
	}
	return (0);
}
