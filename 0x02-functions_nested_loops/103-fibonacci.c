#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : prints first 50 fibonacci numbers
 *
 * Return: Always (0) (Success)
*/

int main(void)
{
	long int f;
	long int f1 = 0;
	long int f2 = 2;

	while (f < 4000000)
	{
		f = f1 + f2;
		if (f == (4000000 - 1))
			printf("%lu\n", f);
		else
			printf("%lu, ", f);
		f1 = f2;
		f2 = f;
	}
	return (0);
}
