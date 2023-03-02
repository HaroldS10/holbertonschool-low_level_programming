#include "main.h"
#include <string.h>
/**
 * _strcmp - Compare two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: The difference between the 2 first different characters in ASCII
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
		return (0);
		}
	i++;
	}
	return (s1[i] + s2[i]);
}
