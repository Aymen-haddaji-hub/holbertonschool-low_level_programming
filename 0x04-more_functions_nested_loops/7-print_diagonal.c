#include "holberton.h"

/**
 * print_diagonal - prints diagonal
 *@n: size
 * Return: none
 */

void print_diagonal(int n)
{
	int c, d;

	for (c = 0; c < n; c++)
	{
		for (d = 0; d <= d; d++)
		{
			if (d != c)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
