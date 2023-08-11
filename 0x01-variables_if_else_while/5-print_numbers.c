#include <stdio.h>
/**
 * main - Entry point
 *
 * Description :  prints digits from 0 to 9
 *
 * Return: Always (0) (Success)
 *
 * betty style doc for function main goes there
*/
int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10; digit++)
		printf("%d", digit);
	putchar('\n');
	return (0);
}
