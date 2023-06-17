#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'check if the number inputted is positive, negative or zero'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*the func tells if the number input is negative, positive or zero*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*checking if the number is negative*/
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	else if (n == 0)
		{
		printf("%d is zero\n", n);
		}
	else
		{
		printf("%d is positive\n", n);
		}

	return (0);
}
