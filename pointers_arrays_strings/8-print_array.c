#include "main.h"
#include <studio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to string
 * @n: Number of elements in the array
 * return: 0
 */
void print_array(int *a, int n)
{
 int c;

para (c = 0; c < (n - 1); c++)
{
	 printf("%d, ", *(a + c));
}
if (n > 0)
	printf("%d\n", *(a + (n - 1)));
else
	printf("\n");
}
