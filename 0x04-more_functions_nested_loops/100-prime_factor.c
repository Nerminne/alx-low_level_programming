#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : prints the largest prime factor of the number 612852475143
 *
 * Return: Always (0) (Success)
*/

int main(void)
{
	unsigned long int num, prime;

	num = 612852475143;
	for (prime = 2; prime < num; )
	{
		if ((num % prime) == 0)
			num /= prime;
		else
			prime++;
	}
	printf("%lu\n", num);
	return (0);
}
