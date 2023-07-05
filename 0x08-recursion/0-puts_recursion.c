#include "main.h"

/**
 * _puts_recursion - print inputted string
 * @s: input string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	purchar(*s);
	_puts_recursion(s + 1);
}
