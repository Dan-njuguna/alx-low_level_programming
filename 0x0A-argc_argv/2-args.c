#include <stdio.h>
/**
 * main - Entry point
 * @argc: counts command line input
 * @argv: stores memory address of argc(pointer to pointer)
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
