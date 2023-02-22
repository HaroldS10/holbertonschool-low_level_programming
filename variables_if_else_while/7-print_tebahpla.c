#include <stdio.h>
/**
 * main - the lowercase alphabet, back to front.
 * Return: Always 0.
 **/
int main(void)
{
char z;
for (z = 'z'; z >= 'a'; z--)
{
putchar(z);
}
putchar('\n');

return (0);
}
