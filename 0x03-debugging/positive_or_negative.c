#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generate a random number and print it
 * rand - does something
 * RAAN_MAX - does something
 * printf - print the message
 * Return: return the status code
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
