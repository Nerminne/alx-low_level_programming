#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: program that multiplies two numbers.
 * @argc: argument counter
 * @argv: argument vector, pointer to array of arguments
 * Return: Always (0) (Success)
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
