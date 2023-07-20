#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner = NULL)
		d->owner = "(nil)";

	else
		printf("Name: %s\nOwner: $s\n", d->name, d->owner);
}
