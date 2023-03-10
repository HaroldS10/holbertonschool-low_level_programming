#include "main.h"
/**
 * _strspn - gets the length of a substring
 * @s: Pointer to string for search
 * @accept: Bytes to search
 * Return: The number of bytes in the initial
 * segment of s relative to the bytes of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int c;

	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c += 1;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (c);
}
