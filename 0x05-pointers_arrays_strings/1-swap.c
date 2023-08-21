#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to int a
 * @b: pointer to int b
 *
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;

	*a = *b;
	*b = ptr;
}
