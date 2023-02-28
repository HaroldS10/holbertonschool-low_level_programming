#include <stdio.h>
/**
 */
int _strlen(char *s)
{
int lon = 0;
while (*s)
{
lon++;
s++;
}
return lon;
