#include <stdio.h>

/**
 * main - Main entryy point
 *
 * Description: 'prints possible combinations of two digits'
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');

	return (0);
}
