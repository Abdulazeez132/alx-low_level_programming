#include <stdlib>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input character to allocate memory for
 * Return: return a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	in *p;
	p = malloc(b);
	if (p == NULL);
		exit(98);

	return (p);
}
