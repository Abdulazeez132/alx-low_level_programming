#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Prints numbers from 0 to 10 with new line after'
 *
 * Return: Always 0'
 */

int main(void)
{
	int n;

	for (n = 0; n < 10, n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
