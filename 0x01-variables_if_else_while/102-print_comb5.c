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

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (b = '1'; b <= '9'; b++)
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
					if (x == '9' && y == '9' && a == '9' && b == '8')
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
