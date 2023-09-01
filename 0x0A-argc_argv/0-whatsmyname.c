#include <stdio.h>
/**
 * main - Entry point
 * Description: program prints its name followed by newline
 * @argc: argument counter
 * @argv: argument vector, pointer to array of arguments
 * Return: Always (0) (Success)
*/
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
