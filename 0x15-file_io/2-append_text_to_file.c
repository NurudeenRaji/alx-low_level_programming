#include "main.h"

/**
 * append_text_to_file - Appends to the end of a file.
 * @filename: the name of the file to work on.
 * @text_content: the content of the file.
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;
	size_t len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	len = strlen(text_content);
	wr = write(fd, text_content, len);
	if (wr < 0 || (size_t)wr != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
