#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: text file name
 * @text_content: \0 terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, write_ind, len;

	if (filename == NULL)
		return (-1);

	if (text_content)
		len = (int)strlen(text_content);
	else
		len = 0;

	open_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (open_file == -1)
		return (-1);

	write_ind = write(open_file, text_content, len);
	if (write_ind == -1 || write_ind != len)
		return (-1);

	close(open_file);
	return (1);
}
