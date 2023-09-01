#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: program that adds positive numbers.
 * @argc: argument counter
 * @argv: argument vector, pointer to array of arguments
 * Return: Always (0) (Success)
*/
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argc > i; i++)
	{
		if ((**(argv + i) < '0' || **(argv + i) > '9'))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
