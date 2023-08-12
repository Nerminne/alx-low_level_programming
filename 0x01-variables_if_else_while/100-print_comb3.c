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
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
{
		for (y = (x + 1); y <= '9'; y++)
{
			putchar(x);
			putchar(y);

		if (x != '8' || y != '9')
{
			putchar(',');
			putchar(' ');
}
}
}
	putchar('\n');

	return (0);
}
