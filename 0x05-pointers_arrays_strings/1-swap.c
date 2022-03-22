#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap the values of integers
 * @a : First number
 * @b : Second number
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
