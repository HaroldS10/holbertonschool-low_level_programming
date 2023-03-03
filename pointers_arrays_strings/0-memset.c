#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s:pointer to fill
 * @b:Constant byte to fill
 * @n:Bytes to fill
 * Return:Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
