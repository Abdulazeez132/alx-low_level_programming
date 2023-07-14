#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input character to allocate memory for
 * Return: return a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p == NULL);
		return (98);

	return (p);
}
