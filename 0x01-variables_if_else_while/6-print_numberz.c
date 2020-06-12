#include <stdio.h>

/**
 *main-write program that prints numbers of base 10
 *Return: 0;
 */

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
