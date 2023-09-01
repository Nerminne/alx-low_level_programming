#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector, pointer to array of arguments
 * Return: Always (0) (Success)
*/
int main(int argc, char **argv)
{
	while (argc > 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}
