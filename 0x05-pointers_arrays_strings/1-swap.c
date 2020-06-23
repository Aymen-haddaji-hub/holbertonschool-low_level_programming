#include "holberton.h"

/**
 * swap_int - swaps the value stored in a & b
 * @a: pointer 1
 * @b: pointer 2
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
