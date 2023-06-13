#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: Integer Value
 * @argv: Pointer to an array of strings
 * Return: 1 if not digits, 0 if success
 */
int main(int argc, char *argv[])
{
	unsigned int add = 0, m;
	int k;
	char *c;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			c = argv[k];
			for (m = 0; m < strlen(c); m++)
			{
				if (c[m] < 48 || c[m] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(c);
			c++;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
