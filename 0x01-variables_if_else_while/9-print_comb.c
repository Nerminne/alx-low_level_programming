#include <stdio.h>
/**
 * main - Entry point
 *
 * Description :  prints hex digits
 *
 * Return: Always (0) (Success)
 *
 * betty style doc for function main goes there
*/
int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
	putchar(n);
	if (n != '9')
{
		putchar(',');
		putchar(' ');
}
}
	return (0);
}
