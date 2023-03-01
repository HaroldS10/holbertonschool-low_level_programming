#include "main.h"
#include <string.h>

void puts2(char *str)
{
int c;
int n;

c = strlen(str) - 1;
n = 0;
while (n <= c)
{
if (n % 2 == 0)
_putchar(*(str + n));
n++;
}
_putchar('\n');
}
