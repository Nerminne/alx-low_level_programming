#include <stdio.h>
/**
 * main - Entry point
 *
 * Description :  prints the alphabet in lowercase
 *
 * Return: Always (0) (Success)
 *
 * betty style doc for function main goes there
*/
int main(void)
{
	char alpha_ch;

	for (alpha_ch = 'a'; alpha_ch <= 'z'; alpha_ch++)
		putchar(alpha_ch);

	for (alpha_ch = 'A'; alpha_ch <= 'Z'; alpha_ch++)
		putchar(alpha_ch);
	putchar('\n');
	return (0);
}
