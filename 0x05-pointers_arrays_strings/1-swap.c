#include "main.h"
#include <stdio.h>

/**
 * swap_int - This function swaps the value of two integers
 *
 * @a: the int to be swapped with b
 * @b: the int to be swaped with a
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;

}
