#include <stdio.h>
/**
 * main - Entry point
 * Description: prints its name, followed by a new line.
 * @argc: argument counter
 * @argv: argument vector, pointer to array of arguments
 * Return: Always (0) (Success)
*/

int main(int argc, char **argv)
{
	(void)argc;
		printf("%s\n", argv[0]);
	return (0);
}
