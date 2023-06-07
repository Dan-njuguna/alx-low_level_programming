#include "main.h"
/**
 * _print_rev_recursion - prints a string reverse
 * @s: String in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
