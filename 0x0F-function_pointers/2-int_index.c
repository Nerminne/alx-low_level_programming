#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of int used
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to compare values
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
		return (-1);
}
