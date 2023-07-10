#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array and initializes it with specific character
 * @size: input size of the array to create
 * @c: character to initialize the array
 * Return: returns pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return ("\0");

	ar = (char*) malloc (size * sizeof(char));
	ar[0] = c;
	return (ar);
}
