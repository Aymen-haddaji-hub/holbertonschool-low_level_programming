#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Search int in an array
 * @array: Array to search
 * @size: size of the array
 * @cmp: Function to use for comparasion
 * Return: int to index , or -1 if not found or <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr)(int);
	int i, v;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	ptr = cmp;
	for (i = 0; i < size;)
	{
		v = ptr(array[i]);
		if (v != 0)
			return (i);
		i++;
	}
	return (-1);
}
