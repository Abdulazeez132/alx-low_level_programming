#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * @a: 1st parameter given
 * @b: the 2nd parameter given
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
