#include "main.h"

/**
 * read_textfile - Read a text file and prints to POSIX.
 * @filename: the file name.
 * @letters: the number of letter to read.
 * Return: 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff;
	ssize_t read_letters, write_letters;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		free(buff);
		close(fp);
		return (0);
	}

	read_letters = read(fp, buff, letters);
	if (read_letters < 0)
	{
		free(buff);
		close(fp);
		return (0);
	}

	write_letters = write(STDOUT_FILENO, buff, read_letters);
	if (write_letters < 0 || write_letters != read_letters)
	{
		free(buff);
		close(fp);
		return (0);
	}


	free(buff);
	close(fp);
	return (read_letters);
}
