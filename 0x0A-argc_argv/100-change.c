#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: arguement count
 * @argv: argument numbers
 * Return: 0;
 */

int main(int argc, char **argv)
{
	int a, i;

	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (a % 25 >= 0)
	{
		i += a / 25;
		a = a % 25;
	}
	if (a % 10 >= 0)
	{
		i += a / 10;
		a = a % 10;
	}
	if (a % 5 >= 0)
	{
		i += a / 5;
		a = a % 5;
	}
	if (a % 2 >= 0)
	{
		i += a / 2;
		a = a % 2;
	}
	if (a % 1 >= 0)
	{
		i += a / 1;
	}
	printf("%d\n", i);
	return (0);
}
