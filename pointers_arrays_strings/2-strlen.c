#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * Return: 0
 */
int _strlen(char *s)
{
int lon = 0;
while (*s != '\0')
{
lon++;
s++;
}
return (lon);
