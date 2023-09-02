#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: minimum cent change
 * @argc: argument counter
 * @argv: argument vector, pointer to array of arguments
 * Return: Always (0) (Success)
*/
int main(int argc, char *argv[])
{
	int change, cents;

	change = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents > 0)
		{
			for (; cents >= 25; change++)
			{
				cents -= 25;
			}
			for (; cents >= 10; change++)
			{
				cents -= 10;
			}
			for (; cents >= 5; change++)
			{
				cents -= 5;
			}
			for (; cents >= 2; change++)
			{
				cents -= 2;
			}
			for (; cents >= 1; change++)
			{
				cents -= 1;
			}
			printf("%d\n", change);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
