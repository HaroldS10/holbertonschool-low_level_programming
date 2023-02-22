#include <stdio.h>
/**
 * main - possible combinations of single-digit numbers.
 * Return: Always 0.
 **/
int main(void)
{
int a, b, c;

for (a = 0; a < 10; a++)
{
for (b = a; b < 10; b++)
{
for (c = b; c < 10; c++)
{
putchar(a + '0');
putchar(',');
putchar(' ');
putchar(b + '0');
putchar(',');
putchar(' ');
putchar(c + '0');
putchar('\n');
}
}
}

return (0);
}
