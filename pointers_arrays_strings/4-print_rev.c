#include "main.h"
/**
 * print_rev - reverses a string
 *@s: pointer to reverses
 *return: 0
 */
void print_rev(char *s)
{
int c;
c = _strlen(s) - 1;
for (; c >= 0; c = c -1)
{
_putchar (*(s + c));
}
_putchar ('\n')
