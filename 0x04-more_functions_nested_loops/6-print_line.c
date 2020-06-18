#include "holberton.h"

/**
 * print_line - draws a straight line into terminal
 * @n: integer to c
 * Return: none;
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
