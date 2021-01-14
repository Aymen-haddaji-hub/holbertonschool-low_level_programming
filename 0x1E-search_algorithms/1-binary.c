#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, first = 0, empty_value = size - 1;

	if (!array)
	{
		return (-1);
	}
	while (empty_value >= first)
	{
		printf("Searching in array: ");
		for (index = first; index < empty_value; index++)
		{
			printf("%d, ", array[index]);
		}

		printf("%d\n", array[empty_value]);
		index = (first + empty_value) / 2;

		if (array[index] < value)
		{
			first = index + 1;
		}
		else
		{
			if (array[index] > value)
				empty_value = index - 1;
			else
				return (index);
		}
	}
	return (-1);
}
