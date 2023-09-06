#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * by alloc_grid function.
 * @grid: pointer to pointer to int
 * @height: height of 2D array (row)
 * Return: nothing
 */
void free_grid(int **grid, int height);
{
	int row;

	for (row = 0; row < height; row++)
		free(array[row]);
	free(array);
}
