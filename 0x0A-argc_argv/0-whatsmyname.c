#include <stdio.h>
/**
 * main - entry point
 * @argc: counts command line input
 * @argv: stores memory address of argc
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
