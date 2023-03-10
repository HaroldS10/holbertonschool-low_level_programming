#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate a particular character in the string
 * @s: string to read
 * @c: character to search
 * Return: Pointer where you find c,
 * or NULL if you can't find c
 */
char *_strchr(char *s, char c)
{
	int i;
	char *N;

	N = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			N = &s[i];
			break;
		}
	}
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	else
		return (N);
}
