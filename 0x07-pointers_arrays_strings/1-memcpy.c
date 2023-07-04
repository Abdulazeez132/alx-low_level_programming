#include "main.h"

/**
 * *_memcpy - copy memory area
 *
 * @dest: input memory area destination
 *
 * @src: input memory area source to copy
 *
 * @n: number of bytes
 *
 * Return: return memory address to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
