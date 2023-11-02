#include "main.h"

/**
 * create_file - Creates a file
 * @filename: the name of the file.
 * @text_content: the content of the file to use.
 * Return: 1 or -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	/*mode_t mode;*/

	/*mode = S_IRUSR | S_IWUSR;*/
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		len = write(fd, text_content, strlen(text_content));
		if (len < 0 || (size_t)len != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
