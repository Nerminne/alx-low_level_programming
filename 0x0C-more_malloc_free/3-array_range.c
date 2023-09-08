#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int len, i = 0;
	int *array;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	while (min <= len)
		array[i++] = min++;
	return (array);
}
