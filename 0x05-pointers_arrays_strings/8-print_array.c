#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: string
 * @n: number of elements in array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%i", a[i]);
		else
			printf("%i, ", a[i]);
	}
	printf("\n");
}
