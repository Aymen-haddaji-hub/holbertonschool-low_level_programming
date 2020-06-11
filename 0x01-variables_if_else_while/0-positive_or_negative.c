#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	if (n > 0)
	{
		printf("%d", n);
		printf(" ");
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("%d", n);
		printf(" ");
		printf("is negative\n");
	}
	else
	{
		printf("%d", n);
		printf(" ");
		printf("is zero\n");
	}
	return (0);
}
