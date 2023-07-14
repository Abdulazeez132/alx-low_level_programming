#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: input to allocate for
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
t
	if (p == NULL)
		exit(98);
	return (p);
}
