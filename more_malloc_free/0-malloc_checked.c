#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @nb: Bytes to allocate
 * Return: pointer to the allocated memory or 98 if malloc fails
 */
void *malloc_checked(unsigned int nb)
{
	void *ret;

	ret = malloc(nb);
	if (ret == NULL)
		exit(98);
	return (ret);
}
