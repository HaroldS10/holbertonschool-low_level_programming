#include "main.h"
/**
 * print_alphabet - prints alphabet from a-z.
 * Return: 0
**/
void print_alphabet(void)
{
int a;
a = 97;
while (a < 123)
{
_putchar(a);
a++;
}
_putchar('\n');
}
