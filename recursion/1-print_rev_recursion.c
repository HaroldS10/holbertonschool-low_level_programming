#include "main.h"
/**
 * _print_rev_recursion - prints a reverse string, followed by a new line
 * @s: Pointer to string to print
 */
void _print_rev_recursion(char *s)
{
	if (s != '\0')
	{
		s = s + 1;
		_print_rev_recusion(s);
		_putchar (*(s - 1));
	}
}
