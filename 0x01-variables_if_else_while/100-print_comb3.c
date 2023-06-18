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

		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');

			if (i != j)
			{
				putchar(j + '0');

				if (i != 8 && j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0); }
