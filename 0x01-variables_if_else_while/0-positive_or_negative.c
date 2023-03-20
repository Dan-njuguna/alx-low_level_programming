#include <stdio.h>
/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	/*Positive if number is greater than 0*/
	if (n>0){
	printf("is positive\n");
	}
	if (n=0){
	printf("is zero\n");
	}
	else{
	       	printf("is negative\n");
	}
	return (0);
}
