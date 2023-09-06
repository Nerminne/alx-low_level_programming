#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of 2D array (col)
 * @height: height of 2D array (row)
 * Return: pointer to 2D array of int
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		array[row] = malloc(sizeof(int) * width);
		if (array[row] == NULL)
		{
			for (row = 0; row < height; row++)
				free(array[row]);
			free(array);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			array[row][col] = 0;
	}
	return (array);
}
