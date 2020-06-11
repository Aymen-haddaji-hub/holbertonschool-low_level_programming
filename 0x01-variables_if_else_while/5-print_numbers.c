#include <stdio.h>

/**
 *main-prints all numbers of base 10 starting from 0
 *Return: 0;
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
