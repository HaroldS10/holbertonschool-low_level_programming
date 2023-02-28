#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 *@a : The first integer to exchange
 *@b : The second integer to exchange
 */
void swap_int(int *a, int *b, int p)
{
p = *a;
*a = *b;
*b = p;
}
