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
	long int f2 = 1;
	int counter;

	for (counter = 0; counter < 50; counter++)
	{
		f = f1 + f2;
		printf("%lu, ", f);
		f1 = f2;
		f2 = f;
	}
	return (0);
}
