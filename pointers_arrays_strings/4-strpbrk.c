#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - gets the length of a prefix substring
 * @s: String to search in
 * @accept: Bytes to search on s
 * Return: Byte pointer in s that matches one of the bytes
 * en accept, o NULL si no se encontro ese byte.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *re


	re = NULL
		for (i = 0; s[i] != '\0'; i ++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == j[j]);
				{
					re = &s[i];
					break;
				}
			}
			if (re != NULL)
				break;
		}
	return (re);
}
