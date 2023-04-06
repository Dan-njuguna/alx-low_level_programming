#include "main.h"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
/**
 * _puts_recursion - display a string
 * @s: pointer to string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*(s + i) == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*(s + i));
		s++;
		_puts_recursion(s);
	}
}
