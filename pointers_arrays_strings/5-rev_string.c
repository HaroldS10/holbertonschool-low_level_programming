#include "main.h"
#include <string.h>
/**
 * rev_string - invert a string without printing a new one
 * @s: pointer to string
 * return: 0
 */
void rev_string(char *s)
{
int a;
int b;
char c;

a = strlen(s) - 1;
b = 0;
while (a >= b)
{
c = *(s + b);
*(s + b) = *(s + a);
*(s + a) = c;
a = a - 1;
b++;
}
}
