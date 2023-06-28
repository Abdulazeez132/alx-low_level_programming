#include "main.h"

/**
 * swap - swap values of two integers
 *
 * @a, @b: a and b are parameters given
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
