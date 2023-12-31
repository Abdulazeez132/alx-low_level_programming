#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: input to allocate for
 * Return: return p
 * if malloc fails, terminates with normal exit value
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
