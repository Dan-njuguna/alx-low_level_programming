#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * prime_rule - function rule of prime
 * @n: integer
 * @d: divisor
 * Return: integer 1 is prime 0 is not prime
 */
int prime_rule(int n, int d)
{
	if (n % d == 0)
	{
		if (n == d)
			return (1);
		else
			return (0);
	}
	return (0 + prime_rule(n, (d + 1)));
}
/**
 * is_prime_number - check number is prime
 * @n: number
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_rule(n, 2));
}
