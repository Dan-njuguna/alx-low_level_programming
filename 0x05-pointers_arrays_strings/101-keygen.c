#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function generates random password that
 * cracks the program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	char password[98];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));
	
	while (sum < 4567)
	{
		password[index] = 34 + rand() % 25;
		sum +=password[index++];
	}
	
	password[index] = '\0';

	if (sum != 4567)
	{
		diff_half1 = (sum - 4567) / 2;
		diff_half2 = (sum - 4567) / 2;

		if ((sum - 4567) % 2 != 0)
			diff_half1++;

		for (index = 0 ; password[index] ; index++)
		{
			if (password[index] >= (34 + diff_half2))
			{
				password[index] -= diff_half2;

				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
