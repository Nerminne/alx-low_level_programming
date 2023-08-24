
#include "main.h"
/**
 **reverse_array - function that reverse strings.
 * @a: pointer to string
 * @n: number of element
 */

void reverse_array(int *a, int n)
{
	int tmp, i, len;

	len = n;

	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n - 1) / 2;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[len - 1];
		a[len - 1] = tmp;
		len--;
	}
}
