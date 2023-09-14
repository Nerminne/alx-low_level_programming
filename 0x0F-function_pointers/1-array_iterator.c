#include "function_pointers.h"
#include <stddef. h>
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: array of int used
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	
	if (array &&b+ action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
