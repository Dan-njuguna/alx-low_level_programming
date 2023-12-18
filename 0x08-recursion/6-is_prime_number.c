#include "main.h"
#include <stdio.h>
int _prime(int n, int x);
/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: Input value
 * Return: 1 if input is prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - checks if number is prime recursively
 * @n: number
 * @x: iteration
 * Return: 1 if prime, 0 if not
 */
int _prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if ((n / x) < x)
		return (1);
	return (_prime(n, x + 1));
}
