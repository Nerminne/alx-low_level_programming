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

	if (argc < 1)
		printf("0\n");
	for (i = 1; argc > i && argc > 1; i++)
	{
		if (**(argv + i) >= '0' && **(argv + i) <= '9' 
				&& atoi(argv[i]) >= 0)
		sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}	
	}
	printf("%d\n", sum);
	return (0);
}
