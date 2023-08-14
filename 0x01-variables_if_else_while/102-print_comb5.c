#include <stdio.h>
/**
 * main - Entry point
 *
 * Description :  prints all possible combinations of two two-digit numbers
 *
 * Return: Always (0) (Success)
 *
 * betty style doc for function main goes there
*/

int main(void)
{
	int x, y, a, b;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (a = 48; a <= 57; a++)
			{
				for (b = 49; b <= 57; b++)
				{
					if (a == x && b == y)
						break;
				else
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (x == 57 && y == 57 && a == 57 && b == 56)
						break;
				else
				{
					putchar(',');
					putchar(' ');
				}
				}
				}
			}
		}
	}
	return (0);
}
