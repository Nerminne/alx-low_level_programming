#include <stdio.h>
/**
 * main - Entry point
 *
 * Description :  prints digits from 012 to 789
 *
 * Return: Always (0) (Success)
 *
 * betty style doc for function main goes there
*/

int main(void)
{
	int z;
	int y;
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = (x + 1); y <= '9'; y++)
		{
			for (z = (y + 1); z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != '7' || y != '8' || z != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
