#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create an array of chars, with a specific char
 * @size: size
 * @c: character c
 * Return: c
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size != 0)
		array = malloc(size * sizeof(c));
	else
		return (NULL);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
