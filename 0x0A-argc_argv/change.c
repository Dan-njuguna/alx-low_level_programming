#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int k = 0;
	int count = 0, num;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
	}
	while (num > 0)
	{
		if (num >= coins[0])
		{

