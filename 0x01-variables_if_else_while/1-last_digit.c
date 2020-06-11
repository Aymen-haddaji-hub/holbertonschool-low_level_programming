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
	int n, f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code written By aymen Haddji */
	f = n % 10;
	if (f > 5)
	{
		printf("Last digit of %d is %d and is grater", n, f);
		printf("than 5 and is not zero\n");
	}
	else if (f == 0)
	{
		printf("last digit of %d is %d and is zero\n", n, f);
	}
	else
	{
		printf("last digit of %d is %d and is less", n, f);
		printf("than 6 and is not a zero\n");
	}
		return (0);
}
