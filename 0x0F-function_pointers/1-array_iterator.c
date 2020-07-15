#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Execute function on each element of array
 * @array: int array
 * @size: size of array
 * @action: function to use on array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
