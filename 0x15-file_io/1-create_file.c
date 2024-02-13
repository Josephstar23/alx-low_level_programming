#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: points to the name of the file to be created.
 * @text_content: points to a string to be written to the created file.
 *
 * Return: 1 on success, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, x = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (x = 0; text_content[x];)
			x++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, x);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
