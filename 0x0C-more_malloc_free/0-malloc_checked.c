#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - memory allocation using malloc.
 * @b: sizes to allocate.
 * Return: pointer to the  allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
