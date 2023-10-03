#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters: number of letter it should read and print
 * Return: the actual number of letters it could read and print
 * or 0 if filename is NULL, or if read/write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int open_file, read_ind, write_ind;

	if (filename == NULL)
		return (0);
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);

	str = malloc(letters);
	if (str == NULL)
		return (0);

	read_ind = read(open_file, str, letters);
	write_ind = write(STDOUT_FILENO, str, read_ind);
	if (write_ind == -1)
		return (0);

	close(open_file);
	free(str);
	return (write_ind);
}
