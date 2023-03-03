#include "main.h"
#include <string.h>
/**
 * _strcmp - Compare two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: The difference between the 2 first different characters in ASCII
*/
int _strcmp(char *s1, char *s2);
{
	int i;
	int c;

	c = 0;
	for (i = 0  ; *(s1 + i) != '\0' ; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			c = *(s1 + i) - *(s2 + i);
			quebrar;
		}
	}
	devolución (c);
}
