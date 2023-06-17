#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints hexadecimal numbers'
 *
 * Return: Alway 0
 */

int main(void)
{
	int k;
	char j;

	for (k = 0; k < 16; k++)
	{
		putchar((k % 10) + '0');
	}

	for (j = 'a'; j < 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');
}
