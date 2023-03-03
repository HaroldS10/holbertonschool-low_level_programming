#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Destination of copy
 * @src: Source of copy
 * @n: Bytes to copy from source to destination
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;
	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
