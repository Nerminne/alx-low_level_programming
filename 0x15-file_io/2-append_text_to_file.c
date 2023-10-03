#include "main.h"
/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: name of text file
 * @text_content: text_content is the NULL terminated string
 * to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_ind, len;

	if (filename == NULL)
		return (-1);

	if (text_content)
		len = (int)strlen(text_content);
	else
		len = 0;

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);

	write_ind = write(open_file, text_content, len);
	if (write_ind == -1)
		return (-1);

	close(open_file);
	return (1);
}
