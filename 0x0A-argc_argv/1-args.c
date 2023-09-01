#include <stdio.h>
/**
 * main - Entry point
 * Description: program prints number of arguments pass into it
 * @argc: argument counter
 * @argv: argument vector, pointer to array of arguments
 * Return: Always (0) (Success)
*/
int main(int argc, char __attribute__ ((unused)) **argv)
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
