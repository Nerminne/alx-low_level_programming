
#include "main.h"
/**
 **reverse_array - function that reverse strings.
 * @a: pointer to string
 * @n: number of element
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
