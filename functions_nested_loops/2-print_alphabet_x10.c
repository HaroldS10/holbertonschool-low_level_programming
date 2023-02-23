#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *Return: 0
 */
void print_alphabet_x10(void)
{
int v = 0;
char a;
while (v++ <= 9)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
}
