#include <stdio.h>
/**
 */
void _puts(char *str)
{
  int c;
  for (c = 0; *(str + c) != '\0'; c++)
{
printf (*(str + c));
}
printf ('\n')
}
