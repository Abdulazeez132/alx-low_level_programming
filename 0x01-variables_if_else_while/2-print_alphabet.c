#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints alphabet in lower case'
 *
 * Return: Always 0(Successful)
 */

int main(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		char small_alpha = putchar(tolower(i));
	}
	return (0);
}
