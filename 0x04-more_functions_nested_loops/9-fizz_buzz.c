#include <stdio.h>

/**
 * main - Entry point
 * print fizz when multiples of 3 
 * print buzz when multiples of 5 
 * print Fizzbuzz multiple of both 3 and 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
