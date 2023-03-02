#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings, but it will use at most n bytes from src
 * @src: pointer to source string
 * @det: pointer to target string
 * return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	lendest = strlen(dest);
	lensrc = strlen(src);
	i = 0;
	while (i < n && i < lensrc)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
