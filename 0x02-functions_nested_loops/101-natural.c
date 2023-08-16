#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always (0) (Success)
*/

int main(void)
{
	int n, sum;

	sum = 0;
	if ((n % 3) == 0 || (n % 5) == 0)
	{
		for (n = 0; n < 1024; n++)
		{
			sum += n;
			printf("%d\n", sum);
		}
	return (0);
	}
}
