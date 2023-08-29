#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 square matrix diagonals
 * @a: pointer to array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int diag_one = 0, diag_two = 0;

	for (i = 0; i < size; i++)
		diag_one += *(a + (size * i + i));
	for (i = size - 1, j = 0; i >= 0; i--, j++)
		diag_two += *(a + (size * j + i));
	printf("%d, %d\n", diag_one, diag_two);
}
