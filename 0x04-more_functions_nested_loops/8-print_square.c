#include "holberton.h"

/**
 * print_square - prints a square of given size
 * @size: size of square
 * Return: none;
 */

void print_square(int size)
{
	int c, d;

	if (size <= 0)
		_putchar('\n');
	for (c = 0; c < size; c++)
	{
		for (d = 0; d < size; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
