#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array -a function that creates an array of chars, and initializes it with a specific char.
 * @size: size
 * @c: character c
 * Return: NULL if size = 0
 * Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size != 0)
		a = malloc(size * sizeof(c));
	else
		return (NULL);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
