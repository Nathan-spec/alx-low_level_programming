#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap the values of integers
 * @a : First number
 * @b : Second number
 */
void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
